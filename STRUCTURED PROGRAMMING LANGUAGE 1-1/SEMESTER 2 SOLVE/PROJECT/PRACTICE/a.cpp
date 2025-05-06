#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to read content from a text file
std::string readTextFromFile(const std::string &filePath) {
    std::ifstream file(filePath);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

// Function to tokenize a string
std::vector<std::string> tokenize(const std::string &text) {
    std::vector<std::string> tokens;
    std::istringstream iss(text);
    std::string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to calculate the Jaccard similarity coefficient
double calculateJaccardSimilarity(const std::vector<std::string> &set1, const std::vector<std::string> &set2) {
    std::unordered_set<std::string> intersection;
    for (const auto &word : set1) {
        if (set2.count(word) > 0) {
            intersection.insert(word);
        }
    }

    std::unordered_set<std::string> unionSet(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());

    double similarity = static_cast<double>(intersection.size()) / unionSet.size();
    return similarity;
}

// Function to check plagiarism between two text files
double checkPlagiarism(const std::string &filePath1, const std::string &filePath2) {
    // Read content from text files
    std::string text1 = readTextFromFile(filePath1);
    std::string text2 = readTextFromFile(filePath2);

    // Tokenize the text
    std::vector<std::string> tokens1 = tokenize(text1);
    std::vector<std::string> tokens2 = tokenize(text2);

    // Calculate Jaccard similarity
    double similarity = calculateJaccardSimilarity(tokens1, tokens2);

    // Print common phrases
    std::cout << "Common Phrases:" << std::endl;
    for (const auto &word : tokens1) {
        if (tokens2.count(word) > 0) {
            std::cout << word << " ";
        }
    }
    std::cout << std::endl;

    return similarity * 100;  // Return similarity as a percentage
}

int main() {
    // Example usage
    std::string filePath1 = "document1.txt";
    std::string filePath2 = "document2.txt";

    double similarityPercentage = checkPlagiarism(filePath1, filePath2);

    std::cout << "Similarity: " << similarityPercentage << "%" << std::endl;

    return 0;
}
