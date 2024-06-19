#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    list<string> chats;  
    unordered_map<string, list<string>::iterator> chatMap;
    
    for (int i = 0; i < n; ++i) {
        string recipient;
        cin >> recipient;
        
        
        if (chatMap.find(recipient) != chatMap.end()) {
            
            chats.erase(chatMap[recipient]);
        }
        
        
        chats.push_front(recipient);
        
        chatMap[recipient] = chats.begin();
    }
    
    
    for (const auto& recipient : chats) {
        cout << recipient << "\n";
    }
    
    return 0;
}
