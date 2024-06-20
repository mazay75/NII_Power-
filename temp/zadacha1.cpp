#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;


vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {         //если слово не пустое, то добавить это слово в вектор words 
        words.push_back(word);
    }

    return words;
}

set<string> StopWords(string text1){
    vector<string> stopwords1= SplitIntoWords(text1);
    set<string> stopwords2(stopwords1.begin(), stopwords1.end());
    return stopwords2;
    
    
}


int main() {
    /* Считайте строку со стоп-словами */
    string stopw;
    getline(cin, stopw);
    set<string> stopwords3=StopWords(stopw);

    // Считываем строку-запрос
    string query;
    getline(cin, query);
    
    // Выведите только те слова, которых нет среди стоп-слов
    for (string word : SplitIntoWords(query)) {
        if (!stopwords3.count(word)) {cout << '[' << word << ']' << endl;}
        
        
    }
}
