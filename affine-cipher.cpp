#include <bits/stdc++.h>
using namespace std;

string encrypt(int a, int b, string word)
{
    int m = 26;
    string eWord = "";
    int word_size = word.length();
    int arr[word_size];

    for (int i = 0; i < word_size; i++)
    {
        eWord = eWord + char((((a * (word[i] - 'a')) + b) % m) + 'a');
    }
    return eWord;
}

int main()
{
    string word;
    cout << "Enter the word : " << endl;
    cin >> word;
    int a, b, m = 26;
    cout << "Enter key pair value : " << endl;
    cin >> a >> b;
    cout << "\nEncrypted Word is : " << endl
         << encrypt(a, b, word);
}