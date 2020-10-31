#include <iostream>
#include <string>

using namespace std;

string username, password = "";
string kupon = "USAHID123";
string i_kupon;
string menu[7] = {" ", "Chicken", "Spaghetti", "Roti", "Coke", "Burger", "Mie Goreng"};
bool login = false;
int harga[7] = {0, 7000, 12000, 3000, 2500, 10000, 5000};
int menuselect, banyak, total, total_diskon, total_akhir;
char k_kupon;

void loginform()
{

    cout << "\tSelamat datang ! Silahkan login terlebih dahulu.\n\n";

    do
    {

        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
        cin >> password;

        if (username == "usahid" && password == "usahid123")
        {
            cout << "\n Anda berhasil login ! \n";
            login == true;
            break;
        }
        else
        {
            cout << "\n Gagal login ! \n";
            cout << endl;
            cout << "\n Silahkan login kembali\n";
            cout << endl;
        }
    } while (!login);
}

void menu_list()
{

    cout << "\t DAFTAR MENU YANG TERSEDIA \n";
    cout << "1. " << menu[1] << "\t\t Rp. 7000 " << endl;
    cout << "2. " << menu[2] << "\t\t Rp. 12000 " << endl;
    cout << "3. " << menu[3] << "\t\t\t Rp. 3000 " << endl;
    cout << "4. " << menu[4] << "\t\t\t Rp. 2500 " << endl;
    cout << "5. " << menu[5] << "\t\t Rp. 10000 " << endl;
    cout << "6. " << menu[6] << "\t\t Rp. 5000 " << endl;
    cout << endl;
}
void operasional()
{

    cout << "Masukkan menu yang anda inginkan : ";
    cin >> menuselect;
    cout << "Anda memilih : " << menu[menuselect];
    cout << endl;
    cout << "Berapa jumlah " << menu[menuselect] << " yang anda inginkan ? : ";
    cin >> banyak;
    cout << endl;

    total = banyak * harga[menuselect];

    cout << "Total belanjaan anda adalah Rp. " << total;
}

void fungsi_kupon()
{
    cout << "Apakah anda mempunyai kupon diskon ? : (y/n) ";
    cin >> k_kupon;
    if (k_kupon == 'y' || k_kupon == 'Y')
    {
        cout << "Masukkan kode kupon anda : ";
        cin >> i_kupon;
        if (i_kupon == kupon)
        {
            total_diskon = total * 20 / 100;
            total_akhir = total - total_diskon;
        }
        cout << "Total belanjaan anda setelah mendapat diskon adalah " << total_akhir;
    }
}

int main()
{

    loginform();
    cout << endl;
    cout << endl;
    menu_list();
    cout << endl;
    operasional();
    cout << endl;
    fungsi_kupon();
    cout << endl;
    cout << endl;
    cout << "====== Terima kasih telah berbelanja ^_^ ======";
    cin.get();
    return 0;
}