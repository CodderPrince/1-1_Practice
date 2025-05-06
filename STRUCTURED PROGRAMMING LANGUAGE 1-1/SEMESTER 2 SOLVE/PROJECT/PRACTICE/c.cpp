#include <bits\stdc++.h>
using namespace std;

// Function to tokenize a string into words
vector<string> tokenize(const string &text)
{
    vector<string> words;
    string word;
    for (char c : text)
    {
        if (isalnum(c))
        {
            word += tolower(c);
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }
    return words;
}

// Function to calculate Jaccard similarity between two sets of words
double jaccard_similarity(const vector<string> &words1, const vector<string> &words2)
{
    unordered_map<string, int> word_counts;
    for (const string &word : words1)
    {
        word_counts[word]++;
    }
    for (const string &word : words2)
    {
        word_counts[word]--;
    }
    int intersection = 0, unionn = 0;
    for (const auto &pair : word_counts)
    {
        if (pair.second == 0)
        {
            intersection++;
        }
        else
        {
            unionn += abs(pair.second);
        }
    }
    return static_cast<double>(intersection) / unionn;
}

// Function to print similar words and lines for each pair
void check_file_similarity(const vector<string> &lines1, const vector<string> &lines2)
{
    int total_similar_lines = 0;
    int total_lines = max(lines1.size(), lines2.size());

    for (int i = 0; i < total_lines; ++i)
    {
        if (i < lines1.size() && i < lines2.size())
        {
            double sim = jaccard_similarity(tokenize(lines1[i]), tokenize(lines2[i]));
            cout << "\nSimilar words line " << i + 1 << ": ";

            // Print similar words
            set<string> similar_words;
            vector<string> words1 = tokenize(lines1[i]), words2 = tokenize(lines2[i]);
            for (const string &word : words1)
            {
                if (find(words2.begin(), words2.end(), word) != words2.end())
                {
                    similar_words.insert(word);
                }
            }
            for (const string &word : similar_words)
            {
                cout << word << " ";
            }
            cout << endl;

            // Print similar lines
            cout << "File 1, Line " << i + 1 << ": " << lines1[i] << endl;
            cout << "File 2, Line " << i + 1 << ": " << lines2[i] << endl;

            if (sim >= 0.7)
            {
                total_similar_lines++;
            }
        }
    }

    double similarity_percentage = static_cast<double>(total_similar_lines) / total_lines * 100;
    cout << "\nTotal plagiarism percentage: " << similarity_percentage << "%" << endl << endl;
}

int main()
{
    string file1 = "document1.txt";
    string file2 = "document2.txt";

    ifstream f1(file1), f2(file2);
    if (!f1 || !f2)
    {
        cerr << "Error opening files." << endl;
        return 1;
    }

    vector<string> lines1, lines2;
    string line;
    while (getline(f1, line))
    {
        lines1.push_back(line);
    }
    while (getline(f2, line))
    {
        lines2.push_back(line);
    }

    check_file_similarity(lines1, lines2);

    return 0;
}
