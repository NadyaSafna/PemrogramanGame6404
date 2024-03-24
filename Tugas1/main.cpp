#include <iostream>
#include <vector>

using namespace std;

// Struktur untuk menyimpan status karakter
struct CharacterStatus {
    int hp;
    int mana;
    int damage;
    int equippedSword;
};

// Struktur untuk menyimpan inventory
struct Inventory {
    int herbs;
    int manaPotion;
    int hpPotion;
    vector<int> swords;
};

// Fungsi untuk menampilkan status karakter dan inventory
void displayStatusAndInventory(const CharacterStatus& charStatus, const Inventory& inventory) {
    cout << "Character Status:" << endl;
    cout << "HP: " << charStatus.hp << endl;
    cout << "Mana: " << charStatus.mana << endl;
    cout << "Damage: " << charStatus.damage << endl;
    cout << "Equipped Sword: " << charStatus.equippedSword << endl;

    cout << "\nInventory:" << endl;
    cout << "Herbs: " << inventory.herbs << endl;
    cout << "Mana Potion: " << inventory.manaPotion << endl;
    cout << "HP Potion: " << inventory.hpPotion << endl;
    cout << "Swords: ";
    for (int sword : inventory.swords) {
        cout << sword << " ";
    }
    cout << endl;
}

// Fungsi untuk menggunakan HP Potion
void useHpPotion(CharacterStatus& charStatus, Inventory& inventory) {
    if (inventory.hpPotion > 0) {
        charStatus.hp += 50;
        inventory.hpPotion--;
        cout << "Used HP Potion. HP increased by 50." << endl;
    } else {
        cout << "No HP Potion available." << endl;
    }
}

int main() {
    // Inisialisasi karakter dan inventory
    CharacterStatus charStatus = {100, 50, 20, 1}; // Contoh status karakter awal
    Inventory inventory = {5, 3, 2, {1, 2, 3}}; // Contoh inventory awal

    // Tampilkan status karakter dan inventory
    displayStatusAndInventory(charStatus, inventory);

    // Gunakan HP Potion
    useHpPotion(charStatus, inventory);

    // Tampilkan status karakter dan inventory setelah menggunakan HP Potion
    displayStatusAndInventory(charStatus, inventory);

    return 0;
}
