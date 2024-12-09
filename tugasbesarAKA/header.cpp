#include "header.h"

float vRekursif(float t, float dt){
    if (t <= 0){
        return 0;
    }else{
        return vRekursif(t - dt, dt) + (-9.8 * dt);
    }
}

float vIteratif(float t, float dt){
    float total = 0;
    float i;
    i = t;
    while (i > 0){
        total = total +(-9.8 * dt);
        i = i-dt;
    }
    return total;
}

void menu1(){
    float dt, t;

    dt = 0.01;
    cout << "Masukkan nilai t: ";
    cin >> t;

    cout << "Kecepatan gerak jatuh bebas di detik ke-" << t << " secara rekursif: ";
    printf("%.2f\n", vRekursif(t, dt));
    cout << "Kecepatan gerak jatuh bebas di detik ke-" << t << " secara iteratif: ";
    printf("%.2f\n", vIteratif(t, dt));
    cout << endl;
    mainMenu();
}

void mainMenu(){
    int menu;
    cout << "+------------- SELAMAT DATANG -------------+" << endl;
    cout << "+------------------ Menu ------------------+" << endl;
    cout << "| 1. Kalkulasi Kecepatan Gerak Jatuh Bebas |" << endl;
    cout << "| 2. Exit                                  |" << endl;
    cout << "+------------------------------------------+" << endl;
    cout << "Pilih menu (1/2): ";
    cin >> menu;

    if (menu == 1){
        menu1();
    }else if (menu != 2){
        cout << "Menu tidak tersedia, silakan coba kembali." << endl;
        mainMenu();
    }
}


