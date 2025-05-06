/*
Name: PRINCE
ID: 12105007
Plagiarism Checker in C++ for PDF files
Jaccard Similarity: (total similar lines) / (total lines)
*/

#include <bits/stdc++.h>
#include <poppler/cpp/poppler-document.h>
#include <poppler/cpp/poppler-page.h>

using namespace std;

// Function to extract text from a PDF file
vector<string> extract_text_from_pdf(const string &pdf_file_path)
{
    vector<string> lines;
    poppler::document pdf_document(poppler::document::load_from_file(pdf_file_path));

    if (!pdf_document.is_valid())
    {
        cerr << "Error loading PDF document: " << pdf_file_path << endl;
        return lines;
    }

    for (int i = 0; i < pdf_document.get_pages(); ++i)
    {
        poppler::page pdf_page = pdf_document.create_page(i);
        if (pdf_page.is_valid())
        {
            lines.push_back(pdf_page.text().to_utf8());
        }
    }

    return lines;
}

int main()
{
    string pdf_file1 = "document1.pdf";
    string pdf_file2 = "document2.pdf";

    vector<string> lines1 = extract_text_from_pdf(pdf_file1);
    vector<string> lines2 = extract_text_from_pdf(pdf_file2);

    if (lines1.empty() || lines2.empty())
    {
        cout << "\nError extracting text from PDF files.\n\n";
        return 1;
    }

    check_file_similarity(lines1, lines2);

    return 0;
}
