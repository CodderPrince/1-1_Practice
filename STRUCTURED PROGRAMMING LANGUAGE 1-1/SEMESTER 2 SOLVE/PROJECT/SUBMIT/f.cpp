#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath> // Include cmath for std::isnan

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
            word += c;
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
    set<string> set1(words1.begin(), words1.end());
    set<string> set2(words2.begin(), words2.end());

    int intersection = 0, unionn = 0;

    for (const string &word : set1)
    {
        if (set2.count(word) > 0)
        {
            intersection++;
        }
    }

    unionn = set1.size() + set2.size() - intersection;

    if (unionn == 0)
    {
        return 0.0;
    }
    else
    {
        return static_cast<double>(intersection) / unionn;
    }
}

// Function to count similar words in each line
int count_similar_words(const vector<string> &words1, const vector<string> &words2)
{
    int count = 0;
    for (const string &word : words1)
    {
        if (find(words2.begin(), words2.end(), word) != words2.end())
        {
            count++;
        }
    }
    return count;
}

// Function to print similar words and lines for each pair
void check_file_similarity(const vector<string> &lines1, const vector<string> &lines2)
{
    int total_similar_lines = 0;
    int total_lines = max(lines1.size(), lines2.size());

    for (int i = 0; i < total_lines; ++i)
    {
        vector<string> words1, words2;

        // If lines are available in both documents, tokenize them
        if (i < lines1.size())
        /*it's works like i<strlen(str)
        means separate untill found last line*/
        {
            words1 = tokenize(lines1[i]);
        }

        if (i < lines2.size())
        {
            words2 = tokenize(lines2[i]);
        }

        double sim = jaccard_similarity(words1, words2);

        // Check for NaN and set similarity to 0 in such cases
        if (sim != sim)
        {
            sim = 0.0;
        }

        cout << "\nSimilar words line " << i + 1 << ": " << sim * 100 << "%" << endl;

        // Print similar lines
        if (i < lines1.size())
        {
            cout << "File 1, Line " << i + 1 << ": " << lines1[i] << endl;
        }
        else
        {
            cout << "File 1, Line " << i + 1 << ": [No corresponding line in file 1]" << endl;
        }

        if (i < lines2.size())
        {
            cout << "File 2, Line " << i + 1 << ": " << lines2[i] << endl;
        }
        else
        {
            cout << "File 2, Line " << i + 1 << ": [No corresponding line in file 2]" << endl;
        }

        // Print similar words
        cout << "Similar words in line " << i + 1 << ": ";
        for (const string &word : words1)
        {
            if (find(words2.begin(), words2.end(), word) != words2.end())
            {
                cout << word << " ";
            }
        }
        cout << endl;

        // Count and print total similar words in line as an integer
        int totalSimilarWords = count_similar_words(words1, words2);
        cout << "Total similar words in line " << i + 1 << ": " << totalSimilarWords << endl;

        if (sim == 1.0)
        {
            total_similar_lines++;
        }
    }

    double similarity_percentage = (total_lines == 0) ? 0.0 : static_cast<double>(total_similar_lines) / total_lines * 100;
    cout << "\nTotal plagiarism percentage based on similar lines: " << similarity_percentage << "%" << endl
         << endl;
}

int main()
{
    string file1 = "document1.txt";
    string file2 = "document2.txt";

    ifstream f1(file1), f2(file2);

    if (!f1 || !f2)
    {
        cout << "\nError opening files.\n\n";
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
