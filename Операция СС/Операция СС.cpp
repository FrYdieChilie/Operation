#include <iostream>
#include <ctime>
#include <string>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string name, rasa;
	int hp = 1000;
	int vibr;
	cout << "Выберите сложность игры:\n1.Легкий\n2.Нормальный\n3.Сложный\n4.Невозможный\n";
	cin >> vibr;
	if (vibr == 1)
	{
		hp = 1000;
	}
	if (vibr == 2)
	{
		hp = 500;
	}
	if (vibr == 3)
	{
		hp = 300;
	}
	if (vibr == 4)
	{
		hp = 100;
	}
	cout << "Привет, я программа" << endl << "Напиши, как будут звать главного героя:" << endl;
	cin >> name;
	cout << "Ладно! Начинаю нашу историю:" << endl << "Жил был трухлявый пень... Ой, то есть..." <<
		endl << "Привет! Это опять я, программа! Извини, что прервала историю... Я хотела спросить кто был главный герой по статусу или расе?";
	cout << " Введи, пожалуйста, ответ:" << endl;
	cin >> rasa;
	cout << "Спасибо! Теперь слушай:" << endl << "Жил был " << rasa << " " << name << ". У него была собака (её звали очень сложным именем: Навуходоносор). " <<
		"Всё было отлично! Но однажды собаку украли злые монстры! В ярости " << rasa << " " << name << " отправился в поход. Он поклялся убить" <<
		" всех монстров и спасти бедную собаку!" << endl << "			Так " << name << " отправился в путешествие..." << endl;
	cout << "Он все шел, шел, шел, шел..." << endl;
	string monsters[25] = { "Голлум", "Мантикор","Медуза","Гидра","Зомби","Король Ночи","Дементор","Сивый","Волан-де-морт",
	"Смауг","Азок","Веном","Аид","Кронос","Лука","Некромант","Гейдж","ОГЭ","ЕГЭ","Нико ди Анджело","Оно","Самара Морган","Пришельцы из Войны миров","Джокер"
	,"Враг в отражении(его можно убить только с помощью артефактов)" };
	int hp_monsters[25] = { 20, 30, 50, 110, 40, 90, 80, 95, 100,
	150,200,250,300,400,150,400,20,60,80,190,50,40,200,300
	,800 };
	int ur_monsters[25] = { 5, 10, 30, 20, 50, 10, 20, 30, 50,
	60,100,100,100,20,40,100,100,1,2,100,50,40,100,70
	,150 };
	int hpshit = 0;
	int ur = 50;
	int i = 1;
	int ls;
	int kol_ob_shit = 0;
	int kol_neob_shit = 0;
	int kol_red_shit = 0;
	int kol_epic_shit = 0;
	int kol_leg_shit = 0;
	int kol_mif_shit = 0;
	srand(time(0));
	int randkos = rand() % 2;
	srand(time(0));
	int randkns = rand() % 5;
	srand(time(0));
	int randkrs = rand() % 10;
	srand(time(0));
	int randkes = rand() % 20;
	srand(time(0));
	int randkms = rand() % 50;
	srand(time(0));
	int randkls = rand() % 100;
	int vibors;
	int kol_zelye_iscel = 0;
	int kol_zelye_zashita = 0;
	int kol_zelye_adrenalin = 0;
	srand(time(0));
	int randkzi = rand() % 10;
	srand(time(0));
	int randkza = rand() % 10;
	srand(time(0));
	int randkzz = rand() % 10;
	int im = 0;
	srand(time(0));
	int ik = rand() % 24;
	int vibor;
	int vibora;
	int randur = 0;
	srand(time(0));
	int randrunme = rand() % 2;
	srand(time(0));
	int randurrunme = 1 + rand() % 50;
	srand(time(0));
	int randrunenemyf = rand() % 2;
	srand(time(0));
	int randurrunenemyf = 1 + rand() % 30;
	srand(time(0));
	int randurmy = 5 + rand() % 50;
	cout << "Нажмите для продолжения" << endl;
	cin.ignore();
	cin.get();
	system("cls");
	do
	{
		do
		{
			cout << "Вот и " << i << " монстр! ";
			cout << "Это " << monsters[ik] << ". У этого монстра " << hp_monsters[ik] << " жизней и он наносит " << ur_monsters[ik] << " урона!(или меньше)" << endl;
			ls = ur_monsters[ik];
			do
			{
				if (ik % 2 == 0)
				{
					cout << "Противник застал вас врасплох! Он уже нападает!";
					do
					{
						srand(time(0));
						randur = 1 + rand() % ls;

						if (hpshit > 0)
						{
							cout << "Он снес вам всего " << randur / 10 << ", так как щит вас спас!" << endl;
							hpshit = hpshit - randur / 2;
							hp = hp - randur / 5;
							cout << "У щитов осталось " << hpshit << " HP!";
						}
						else
						{
							cout << "Он снес вам " << randur << " HP!" << endl;
							hp = hp - randur;
						}
						cout << "У вас теперь " << hp << " HP!";
						cout << "Что будете делать?" << endl << "1. Нападать(вы наносите урон противнику)\n2. Бежать(вы можете получить урон или исцелиться)\n3. Защищаться(если у вас есть щиты, то вы можете их использовать)\n4. Использовать артефакт\n0. Просмотреть статистику\n";

						do
						{
							cin >> vibor;
							if (vibor == 1)
							{
								cout << "Вы снесли монстру " << randurmy << " HP!" << endl << "Теперь у него " << hp_monsters[ik] - randurmy << " HP!" << endl;
								hp_monsters[ik] = hp_monsters[ik] - randurmy;
								srand(time(0));
								randurmy = 5 + rand() % 50;
							}
							else if (vibor == 0)
							{
								cout << "У вас " << hp << " НР\nУ щита " << hpshit << " НР\nУ вас:\n" <<
									kol_ob_shit << " обычных щитов\n" <<
									kol_neob_shit << " необычных щитов\n" <<
									kol_red_shit << " редких щитов\n" <<
									kol_epic_shit << " эпических щитов\n" <<
									kol_leg_shit << " легендарных щитов\n" <<
									kol_mif_shit << " мифических щитов\n" <<
									kol_zelye_iscel << " зелий исцеления\n" <<
									kol_zelye_zashita << " зелий защиты\n" <<
									kol_zelye_adrenalin << " зелий адреналина\nУ монстра " <<
									hp_monsters[ik] << " HP!\n";

							}
							else if (vibor == 2)
							{
								cout << "Вы решили бежать... Ну что ж? Бееееееееегииииитееееее!!!!!" << endl;
								if (randrunenemyf == 0)
								{
									cout << "Монстр, пока бежал за вами, упал и потерял " << randurrunenemyf << " HP!" <<
										endl << "Теперь у него " << hp_monsters[ik] - randurrunenemyf << " HP!";
									hp_monsters[ik] = hp_monsters[ik] - randurrunenemyf;
									if (randrunme == 0)
									{
										cout << "Пока вы бежали, вы отдохнули от боя и исцелились на " << randurrunme << " HP!" <<
											endl << "У вас теперь " << hp + randurrunme << " HP!";
										hp = hp + randurrunme;
									}
									else
									{
										cout << "Пока вы бежали, вы упали и потеряли " << randurrunme << " HP!" <<
											endl << "У вас теперь " << hp - randurrunme << " HP!";
										hp = hp - randurrunme;
									}
								}
								else if (randrunenemyf == 1)
								{
									cout << "Монстр, пока бежал за вами, ДОГНАЛ ВАС И СНЕС ВАМ " << randurrunenemyf << " HP!" <<
										endl << "Теперь у вас " << hp - randurrunenemyf << " HP!";
									hp = hp - randurrunenemyf;
								}
								srand(time(0));
								randrunme = rand() % 2;
								srand(time(0));
								randurrunme = 1 + rand() % 10;
								srand(time(0));
								randrunenemyf = rand() % 2;
								srand(time(0));
								randurrunenemyf = 1 + rand() % 30;
							}
							else if (vibor == 3)
							{
								cout << "Вы решили защищаться." << endl << "Выберите, какой щит будете брать:\n1.Обычный(+100)\n2.Необычный(+200)\n3.Редкий(+400)\n4.Эпический(+700)\n5.Мифический+1000)"
									<< endl << "6.ЛЕГЕНДАРНЫЙ(+2000)\n";
								cin >> vibors;
								if (vibors == 1)
								{
									if (kol_ob_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_ob_shit--;
										hpshit = hpshit + 100;
									}
								}
								else if (vibors == 2)
								{
									if (kol_neob_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_neob_shit--;
										hpshit = hpshit + 200;
									}
								}
								else if (vibors == 3)
								{
									if (kol_red_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_red_shit--;
										hpshit = hpshit + 400;
									}
								}
								else if (vibors == 4)
								{
									if (kol_epic_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_epic_shit--;
										hpshit = hpshit + 700;
									}
								}
								else if (vibors == 5)
								{
									if (kol_mif_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_mif_shit--;
										hpshit = hpshit + 1000;
									}
								}
								else if (vibors == 6)
								{
									if (kol_leg_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_leg_shit--;
										hpshit = hpshit + 2000;
									}
								}
							}
							else if (vibor == 4)
							{
								cout << "Вы захотели использовать артефакт. Какой именно артефакт вы хотите использовать?\n1. Зелье исцеления\n2.Зелье адреналина\n3.Зелье защиты\n";
								cin >> vibora;
								if (vibora == 1)
								{
									if (kol_zelye_iscel < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье исцеления! Оно медленно восполняет ваши силы. Теперь у вас " << hp + 500 << " HP!";
										hp = hp + 500;
										kol_zelye_iscel--;
									}
								}
								else if (vibora == 2)
								{
									if (kol_zelye_adrenalin < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье адреналина! Оно медленно дает вам энергии и адреналина.";
										randurmy = 400 + rand() % 50;
										kol_zelye_adrenalin--;
									}
								}
								else if (vibora == 3)
								{
									if (kol_zelye_zashita < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье Защиты! Оно медленно укрепляет ваши щиты. Теперь у ваших щитов " << hpshit + 700 << " HP!";
										hpshit = hpshit + 500;
										kol_zelye_zashita--;
									}
								}
							}
							else
							{
								cout << "Вы выбрали не существующий пункт!" << endl;
							}
						} while (vibor > 4 || vibor < 1);

					} while (hp > 1 && hp_monsters[ik] > 1);
				}
				else
				{
					do
					{
						do
						{
							cout << "Что будете делать?" << endl << "1. Нападать(вы наносите урон противнику)\n2. Бежать(вы можете получить урон или исцелиться)\n3. Защищаться(если у вас есть щиты, то вы можете их использовать)\n4. Использовать артефакт\n0. Просмотреть статистику\n";
							cin >> vibor;
							if (vibor == 1)
							{
								cout << "Вы снесли монстру " << randurmy << " HP!" << endl << "Теперь у него " << hp_monsters[ik] - randurmy << " HP!" << endl;
								hp_monsters[ik] = hp_monsters[ik] - randurmy;
								srand(time(0));
								randurmy = 5 + rand() % 50;
							}
							else if (vibor == 0)
							{
								cout << "У вас " << hp << " НР\nУ щита " << hpshit << " НР\nУ вас:\n" <<
									kol_ob_shit << " обычных щитов\n" <<
									kol_neob_shit << " необычных щитов\n" <<
									kol_red_shit << " редких щитов\n" <<
									kol_epic_shit << " эпических щитов\n" <<
									kol_leg_shit << " легендарных щитов\n" <<
									kol_mif_shit << " мифических щитов\n" <<
									kol_zelye_iscel << " зелий исцеления\n" <<
									kol_zelye_zashita << " зелий защиты\n" <<
									kol_zelye_adrenalin << " зелий адреналина\nУ монстра " <<
									hp_monsters[ik] << " HP!\n";

							}
							else if (vibor == 2)
							{
								cout << "Вы решили бежать... Ну что ж? Бееееееееегииииитееееее!!!!!" << endl;
								if (randrunenemyf == 0)
								{
									cout << "Монстр, пока бежал за вами, упал и потерял " << randurrunenemyf << " HP!" <<
										endl << "Теперь у него " << hp_monsters[ik] - randurrunenemyf << " HP!";
									hp_monsters[ik] = hp_monsters[ik] - randurrunenemyf;
									if (randrunme == 0)
									{
										cout << "Пока вы бежали, вы отдохнули от боя и исцелились на " << randurrunme << " HP!" <<
											endl << "У вас теперь " << hp + randurrunme << " HP!";
										hp = hp + randurrunme;
									}
									else
									{
										cout << "Пока вы бежали, вы упали и потеряли " << randurrunme << " HP!" <<
											endl << "У вас теперь " << hp - randurrunme << " HP!";
										hp = hp - randurrunme;
									}
								}
								else if (randrunenemyf == 1)
								{
									cout << "Монстр, пока бежал за вами, ДОГНАЛ ВАС И СНЕС ВАМ " << randurrunenemyf << " HP!" <<
										endl << "Теперь у вас " << hp - randurrunenemyf << " HP!";
									hp = hp - randurrunenemyf;
								}
								srand(time(0));
								randrunme = rand() % 2;
								srand(time(0));
								randurrunme = 1 + rand() % 10;
								srand(time(0));
								randrunenemyf = rand() % 2;
								srand(time(0));
								randurrunenemyf = 1 + rand() % 30;
							}
							else if (vibor == 3)
							{
								cout << "Вы решили защищаться." << endl << "Выберите, какой щит будете брать:\n1.Обычный\n2.Необычный\n3.Редкий\n4.Эпический\n5.Мифический"
									<< endl << "6.ЛЕГЕНДАРНЫЙ\n";
								cin >> vibors;
								if (vibors == 1)
								{
									if (kol_ob_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_ob_shit--;
										hpshit = hpshit + 100;
									}
								}
								else if (vibors == 2)
								{
									if (kol_neob_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_neob_shit--;
										hpshit = hpshit + 200;
									}
								}
								else if (vibors == 3)
								{
									if (kol_red_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_red_shit--;
										hpshit = hpshit + 400;
									}
								}
								else if (vibors == 4)
								{
									if (kol_epic_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_epic_shit--;
										hpshit = hpshit + 700;
									}
								}
								else if (vibors == 5)
								{
									if (kol_mif_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_mif_shit--;
										hpshit = hpshit + 1000;
									}
								}
								else if (vibors == 6)
								{
									if (kol_leg_shit < 1)
									{
										cout << "У вас нет щитов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										kol_leg_shit--;
										hpshit = hpshit + 2000;
									}
								}
							}
							else if (vibor == 4)
							{
								cout << "Вы захотели использовать артефакт. Какой именно артефакт вы хотите использовать?\n1. Зелье исцеления\n2.Зелье адреналина\n3.Зелье защиты\n";
								cin >> vibora;
								if (vibora == 1)
								{
									if (kol_zelye_iscel < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье исцеления! Оно медленно восполняет ваши силы. Теперь у вас " << hp + 500 << " HP!";
										hp = hp + 500;
										kol_zelye_iscel--;
									}
								}
								else if (vibora == 2)
								{
									if (kol_zelye_adrenalin < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье адреналина! Оно медленно дает вам энергии и адреналина.";
										randurmy = 400 + rand() % 50;
										kol_zelye_adrenalin--;
									}
								}
								else if (vibora == 3)
								{
									if (kol_zelye_zashita < 1)
									{
										cout << "У вас нет артефактов такого типа! Из-за своей невнимательности, вы не обращали внимания на врага, который напал на вас!";
									}
									else
									{
										cout << "Вы выпили зелье Защиты! Оно медленно укрепляет ваши щиты. Теперь у ваших щитов " << hpshit + 700 << " HP!";
										hpshit = hpshit + 500;
										kol_zelye_zashita--;
									}
								}
								else if (vibor < 1 || vibor>4)
								{
									cout << "Вы выбрали не существующий пункт!" << endl;
								}
							}
						} while (vibor > 4 || vibor < 1);
						srand(time(0));
						randur = 1 + rand() % ls;

						if (hpshit > 0)
						{
							cout << "Он снес вам всего " << randur / 10 << ", так как щит вас спас!" << endl;
							hpshit = hpshit - randur / 2;
							hp = hp - randur / 5;
							cout << "У щитов осталось " << hpshit << " HP!";
						}
						else
						{
							cout << "Он снес вам " << randur << " HP!" << endl;
							hp = hp - randur;
						}
						cout << "У вас теперь " << hp << " HP!";
					} while (hp > 1 && hp_monsters[ik] > 1);
				}
			} while (hp > 1 && hp_monsters[ik] > 1);
			i++;
			if (hp_monsters[ik] < 1)
			{
				cout << "Поздравляем! Вы убили монстра! Идите дальше за собакой!" << endl;
				im++;
				if (randkos == 0)
				{
					kol_ob_shit++;
				}
				if (randkns == 0)
				{
					kol_neob_shit++;
				}
				if (randkrs == 0)
				{
					kol_red_shit++;
				}
				if (randkes == 0)
				{
					kol_epic_shit++;
				}
				if (randkms == 0)
				{
					kol_mif_shit++;
				}
				if (randkls == 0)
				{
					kol_leg_shit++;
				}
				if (randkza == 0)
				{
					kol_zelye_adrenalin++;
				}
				if (randkzi == 0)
				{
					kol_zelye_iscel++;
				}
				if (randkzz == 0)
				{
					kol_zelye_zashita++;
				}
				cout << "Теперь у вас " << kol_ob_shit << " обычных щитов, " << kol_neob_shit << " необычных щитов, " << kol_red_shit << " редких, " << kol_epic_shit
					<< " эпических, " << kol_mif_shit << " мифических и " << kol_leg_shit << " легендарных!" <<
					endl << "А также у вас " << kol_zelye_adrenalin << " зелий адреналина, " << kol_zelye_iscel << " зелий исцеления и " <<
					kol_zelye_zashita << " зелий защиты!";
				srand(time(0));
				randkos = rand() % 2;
				srand(time(0));
				randkns = rand() % 5;
				srand(time(0));
				randkrs = rand() % 10;
				srand(time(0));
				randkes = rand() % 20;
				srand(time(0));
				randkms = rand() % 50;
				srand(time(0));
				randkls = rand() % 100;
				srand(time(0));
				randkzi = rand() % 10;
				srand(time(0));
				randkza = rand() % 10;
				srand(time(0));
				randkzz = rand() % 10;
			}
			srand(time(0));
			do
			{
				ik = rand() % 24;
			} while (hp_monsters[ik] < 1);
			if (i == 24)
			{
				ik = 24;
			}
			cout << "Нажмите для продолжения" << endl;
			cin.ignore();
			cin.get();
			system("cls");
		} while (hp > 1 && hp_monsters[24] > 1);
	} while (hp > 1 && hp_monsters[24] > 1);
	if (hp < 1)
	{
		if (hp_monsters[24] < 1)
		{
			cout << "Поздравляем! Вы прошли игру посмертно!" << " Вы убили " << im << " монстров!" << " Вы спасли собачку и убили свое злое отражение, но оно тоже убило вас! Теперь, " <<
				"когда эта дорога не во власти монстров, вас найдут и посмертно назовут героем! Игра пройдена!";
		}
		else
		{
			cout << endl << "Вас убили монстры!" << " Вы убили " << im << " монстров!" << " Теперь вам выроют могилку и отнесут в ваш родной город! Но собачку вы так и не спасли!" <<
				" Игра не пройдена попробуйте еще!";
		}
	}
	else
	{
		cout << "Поздравляем! Вы прошли игру! Вы спасли собачку и убили свое злое отражение! Теперь, " <<
			"когда эта дорога не во власти монстров, вас найдут и назовут героем! Игра пройдена!";
	}
	cin.ignore();
	cin.get();
}