#include "std_lib_facilities.h"

int main()
try {
	cout << "Success!\n";	//1. A cout kicsibetuvel kell irodjon.
	cout << "Success!\n";	//2. Az idezojel nem volt bezarva.
	cout << "Success" << "\n"; //3. hianyzott egy idezojel a \n elejerol valamint pluszban volt egy felkialtojel
	cout << "success" << '\n'; //4. A success nincs idezojelek kozott igy valtozonak veszi ami nincs deklaralva
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //5. A res valtozoba csak string et lehetne deklaralni viszon egy szamot adtunk meg neki. A valtozot string rol int re kell atalakitani.
	vector<int> v(10); v[5] = 7; if (v[5] != 7) cout << "Success!\n"; //6. A vektor egy bizonyos tagjat elohivni muletekre nem kerek hanem szogletes zarojel koze kell irni.
	if (1 < 0) cout << "Success!\n"; else cout << "Fail!\n"; //7. A "cond" nincs deklaralva hogy pontosan mi az. Valamint az if be nincs megadva az eldontendo kerdes. Ezt most megvaltoztattam egy kisseb reszletre ami igazat ad.
	bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; //8. Nincs hiba benne. Az if a c bool ertekre fog valasztani, mivel az false (hamis) igy a dontes hamis agan megy tovabb.
	string s = "ape"; bool c = true; if (c) cout << "Success!\n"; //9. A bool helyett boo volt igy a program valtozonak vedte ami nincs deklaralva. VIszont a bool ba nem lehet megadni szoveget ez hibahoz vezet. Csak true vagy false erteket lehet megadni. Ahoz, hogy kiadja a Succes erteket megvaltoztattam a bool c-t treu ertekre.
	string s = "ape"; if (s == "fool") cout << "Success!\n"; else cout << "Fail!\n"; //10. Nem fog kiadni erteket mert a hamis agra nincs megadva parancs. Ezt javitottam ki es adtam parancsot a dontes hamis agara.
	string s = "ape"; if (s == "fool") cout << "Success!\n"; else cout << "Fail!\n"; //11. A kiiratasnal dupla kacsacsort kell irni. Valamint ugyan az a hiba mint az elozonel. Dontes hamis agan nincs parancs.
	string s = "ape"; if (s == "fool") cout << "Success!\n"; //12. A kiirasnal ugyan az a hiba, dupla kacsacsor. Valamint ugyan az a hiba mint az elozonel. Dontes hamis agan nincs parancs. Valamin a dontesbe ismet nincs eldontendo kerdes igy csak egy muvelet. Ezt irtam at egy egy egyneloseg jelre.
	vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "Success!\n";  //13. A ciklus egy vegtelen ciklus lesz mivel a ciklusdontesben nem a valtozo van megadva hanem egy allando nulla igy vegtelenszer fog lefutni a ciklus. Ezt valtoztattam meg az i valtozora.
	vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "Success!\n"; //14. A ciklusban a dontesben kisseb vagy egyenlo van megadva. Viszont a vektornak koztudott az utolso tagja ures akarmilyne ertekre azt nem hasznalja ebbol adodoan hiba fog keletezni ezt javitottam at csak kisseb re.
	string s = "Success!\n"; for (int i = 0; i < 6; ++i) cout << s; //15. Az s valtozo egy sima string nem pedig vektor igy a kiiratas hibas. azt valtoztattam meg.
	if (true) cout << "Success!\n"; else cout << "Fail!\n";	//16. A dontesben nem kell megadni a "then" szot mivel alapbol az elsonek megadott vagyis az else es az if kozott megadott parancs az igaz ag valamint az else utan a hamis ag. Igy a "then"-t vettem ki amit deklaralatlan valtozonak nez a program.
	int x = 84; char c = x; if (c == 84) cout << "Success!\n"; //17. A char ban nincs megfelelo ertek a 2000 -es int re igy hibat fog kiadni. Mivel a karaktereknek van szamos megfelelojuk igy azokat konyu igy atalakitani de a 2000 nek nicns megfeleloje ezt valtoztattam meg 84 re.
	string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s; //18. Ugyan az a hiba mint a 15-os pontban.
	vector<int> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n"; //19. Ugyan az a hiba mint a 14-es pontban. Valamint a vectorban nincs megadva a valtozo tipusa, vagyis nincs deklaralva. Ezt int nek irtam.
	int i = 0; int j = 9; while (i < 10) { ++j; --i; } if (j < i) cout << "Success!\n";	//20. A ciklus vegtelen lesz mivel a ciklusban nincs megadva semmilyen formaban a tesztelendo valtozo megvaltoztatasara alkalmas parancs.
	int x = 4; double d = 5 / (x - 2); if (d == 2 * x + 0.5) cout << "Success!\n"; //21. A d megadasa helytelen mivel igy nullaval lesz osztva ami matematikailag egy helytelen muvelet. ezt javitottam ki az x ertek novelesevel. Valamint a minuszjel "-" helyett egy vonal volt megadva muveletnek "-"
	string s = "Success!\n"; for (int i = 0; i <= 10; ++i) cout << s; //22. A string<char> helytelen. Ahoz hogy kiirja a megfelelo Success! feliratot at kell alakitani hogy a <chart> kitoroljuk mivel nem vektort deklaralunk, emellet a kiiratasnal is a szogletes zarojelet es tartalmat ugyan ebbol az okbol kifojolag..
	int i = 0; while (i < 10) { ++j; --i; } if (j < i) cout << "Success!\n"; //23. Ugyan az a hiba mint a 20-os pontban.
	int x = 4; double d = 5 / (x-2); if (d = 2 * x + 0.5) cout << "Success!\n"; //24. Ugyan az a hiba mint a 21-es pontban a nullaval valo osztast leszamitva.
	cout << "Success!\n"; //25. Bekeresnel nem lehet szoveget megadni. Bekerni csak valtozot lehet.Megvaltoztattam egy cout ra ami kiirja a string et. Valamint a cout nal a kacsacsorok rosz iranyba alltak.
	keep_window_open();
	return 0;
}
catch (exception & e) {
	cerr << "error: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Oops: unknown excpetion!\n";
	return 2;
}
