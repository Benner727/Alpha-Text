#include "SlayerTask.h"


SlayerTask::SlayerTask()
{
}


SlayerTask::SlayerTask(std::string _name, int _level, std::vector<int> _id)
{
	name = _name;
	level = _level;
	id = _id;
}


SlayerTask::~SlayerTask()
{
}


std::vector<SlayerTask*> turael = {
	new SlayerTask("Banshees", 15, { 5 }),
	new SlayerTask("Bats", 1, { 41, 42 }),
	new SlayerTask("Birds", 1, { 38, 78 }),
	new SlayerTask("Bears", 1, { 43 }),
	new SlayerTask("Cave bugs", 7, { 2, 3 }),
	new SlayerTask("Cave slime", 10, { 6 }),
	new SlayerTask("Cows", 1, { 39 }),
	new SlayerTask("Crawling hands", 5, { 0, 1 }),
	new SlayerTask("Desert lizards", 22, { 8 }),
	new SlayerTask("Dogs", 1, { 79, 80 }),
	new SlayerTask("Dwarves", 1, { 49, 50 }),
	new SlayerTask("Ghosts", 1, { 46 }),
	new SlayerTask("Goblins", 1, { 44 }),
	new SlayerTask("Icefiends", 1, { 53 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83 }),
	new SlayerTask("Minotaurs", 1, { 92 }),
	new SlayerTask("Monkeys", 1, { 84, 85, 86 }),
	new SlayerTask("Rats", 1, { 40 }),
	new SlayerTask("Scorpions", 1, { 51 }),
	new SlayerTask("Skeletons", 1, { 47 }),
	new SlayerTask("Spiders", 1, { 87, 88 }),
	new SlayerTask("Wolves", 1, { 52 }),
	new SlayerTask("Zombies", 1, { 48 })
};

std::vector<SlayerTask*> mazchna = {
	new SlayerTask("Banshees", 15, { 5 }),
	new SlayerTask("Bats", 1, { 41, 42 }),
	new SlayerTask("Bears", 1, { 43 }),
	new SlayerTask("Catablepons", 1, { 89 }),
	new SlayerTask("Cave bugs", 7, { 2, 3 }),
	new SlayerTask("Cave crawlers", 10, { 4 }),
	new SlayerTask("Cave slimes", 17, { 6 }),
	new SlayerTask("Cockatrice", 25, { 9 }),
	new SlayerTask("Crawling hands", 5, { 0, 1 }),
	new SlayerTask("Desert lizards", 22, { 8 }),
	new SlayerTask("Dogs", 1, { 79, 80 }),
	new SlayerTask("Earth warriors", 1, { 90 }),
	new SlayerTask("Flesh crawlers", 1, { 91 }),
	new SlayerTask("Ghosts", 1, { 46 }),
	new SlayerTask("Ghouls", 1, { 93 }),
	new SlayerTask("Hill giants", 1, { 58 }),
	new SlayerTask("Hobgoblins", 1, { 45 }),
	new SlayerTask("Ice warriors", 1, { 54 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83 }),
	new SlayerTask("Killerwatts", 37, { 14 }),
	new SlayerTask("Pyrefiends", 30, { 10 }),
	new SlayerTask("Rockslugs", 20, { 7 }),
	new SlayerTask("Scoprions", 1, { 51 }),
	new SlayerTask("Shades", 1, { 94 }),
	new SlayerTask("Skeletons", 1, { 47 }),
	new SlayerTask("Vampires", 15, { 56 }),
	new SlayerTask("Wall beasts", 35, { 13 }),
	new SlayerTask("Wolves", 1, { 52 }),
	new SlayerTask("Zombies", 1, { 48 })
};

std::vector<SlayerTask*> vannaka = {
	new SlayerTask("Abyssal demons", 85, { 26 }),
	new SlayerTask("Aberrant spectres", 60, { 35 }),
	new SlayerTask("Ankous", 1, { 95 }),
	new SlayerTask("Banshees", 15, { 5 }),
	new SlayerTask("Basilisks", 40, { 16 }),
	new SlayerTask("Blue dragons", 1, { 71 }),
	new SlayerTask("Bloodvelds", 50, { 21 }),
	new SlayerTask("Bronze dragons", 1, { 74 }),
	new SlayerTask("Cave bugs", 7, { 2, 3 }),
	new SlayerTask("Cave crawlers", 10, { 4 }),
	new SlayerTask("Cave slimes", 17, { 6 }),
	new SlayerTask("Cockatrices", 25, { 9 }),
	new SlayerTask("Crawling hands", 5, { 0, 1 }),
	new SlayerTask("Crocodiles", 1, { 96 }),
	new SlayerTask("Dagannoths", 1, { 103 }),
	new SlayerTask("Desert lizards", 22, { 8 }),
	new SlayerTask("Dust devils", 65, { 28 }),
	new SlayerTask("Earth warriors", 1, { 90 }),
	new SlayerTask("Fever spiders", 42, { 18 }),
	new SlayerTask("Fire giants", 1, { 62 }),
	new SlayerTask("Gargoyles", 75, { 32 }),
	new SlayerTask("Ghouls", 1, { 93 }),
	new SlayerTask("Green dragons", 1, { 70 }),
	new SlayerTask("Harpie bug swarms", 33, { 12 }),
	new SlayerTask("Hellhounds", 1, { 98 }),
	new SlayerTask("Hill giants", 1, { 58 }),
	new SlayerTask("Hobgoblins", 1, { 45 }),
	new SlayerTask("Ice giants", 1, { 55 }),
	new SlayerTask("Ice warrior", 1, { 54 }),
	new SlayerTask("Infernal mages", 45, { 19 }),
	new SlayerTask("Jellies", 52, { 22 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83 }),
	new SlayerTask("Killerwatts", 37, { 14 }),
	new SlayerTask("Kurasks", 70, { 30 }),
	new SlayerTask("Lesser demons", 1, { 63 }),
	new SlayerTask("Mogres", 32, { 11 }),
	new SlayerTask("Molanisks", 39, { 15 }),
	new SlayerTask("Moss giants", 1, { 59 }),
	new SlayerTask("Nechryaels", 80, { 33 }),
	new SlayerTask("Ogres", 15, { 60 }),
	new SlayerTask("Pyrefiends", 30, { 10 }),
	new SlayerTask("Rockslugs", 20, { 7 }),
	new SlayerTask("Shadow warriors", 1, { 99 }),
	new SlayerTask("Spiritual creatures", 63, { 28, 29, 34 }),
	new SlayerTask("Terror dogs", 40, { 17 }),
	new SlayerTask("Trolls", 1, { 101 }),
	new SlayerTask("Turoths", 55, { 23 }),
	new SlayerTask("Vampires", 1, { 56 }),
	new SlayerTask("Wall beasts", 35, { 13 }),
	new SlayerTask("Werewolf", 1, { 57 })
};

std::vector<SlayerTask*> chaeldar = {
	new SlayerTask("Abyssal demons", 85, { 26 }),
	new SlayerTask("Aberrant spectres", 60, { 35 }),
	new SlayerTask("Aviansies", 1, { 102 }),
	new SlayerTask("Banshees", 15, { 5 }),
	new SlayerTask("Basilisks", 40, { 16 }),
	new SlayerTask("Black dragons", 1, { 73 }),
	new SlayerTask("Bloodvelds", 50, { 21 }),
	new SlayerTask("Blue dragons", 1, { 71 }),
	new SlayerTask("Cave crawlers", 10, { 4 }),
	new SlayerTask("Cave horrors", 58, { 25 }),
	new SlayerTask("Cave slimes", 17, { 6 }),
	new SlayerTask("Cockatrices", 25, { 9 }),
	new SlayerTask("Dagannoths", 1, { 103 }),
	new SlayerTask("Fever spiders", 42, { 18 }),
	new SlayerTask("Gargoyles", 75, { 32 }),
	new SlayerTask("Dust devils", 65, { 28 }),
	new SlayerTask("Earth warriors", 1, { 90 }),
	new SlayerTask("Fire giants", 1, { 62 }),
	new SlayerTask("Harpie bug swarms", 33, { 12 }),
	new SlayerTask("Infernal mages", 45, { 19 }),
	new SlayerTask("Jellies", 52, { 22 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83}),
	new SlayerTask("Kurasks", 70, { 30 }),
	new SlayerTask("Lesser demons", 1, { 63 }),
	new SlayerTask("Rockslugs", 20, { 7 }),
	new SlayerTask("Trolls", 1, { 101 }),
	new SlayerTask("Turoths", 55, { 23 }),
	new SlayerTask("Wall beasts", 35, { 13 }),
	new SlayerTask("Desert lizards", 22, { 8 }),
	new SlayerTask("Hellhounds", 1, { 98 }),
	new SlayerTask("Bronze dragons", 1, { 74 }),
	new SlayerTask("Mutated zygomites", 57, { 24 }),
	new SlayerTask("Molanisks", 39, { 15 }),
	new SlayerTask("Mogres", 32, { 11 }),
	new SlayerTask("Nechryaels", 80, { 33 }),
	new SlayerTask("Iron dragons", 1, { 75 }),
	new SlayerTask("Pyrefiends", 20, { 10 }),
	new SlayerTask("Spiritual creatures", 63, { 27, 29, 34 }),
	new SlayerTask("Shadow warriors", 1, { 99 }),
	new SlayerTask("Skeletal wyverns", 72, { 31 }),
	new SlayerTask("Steel dragons", 1, { 76 })
};

std::vector<SlayerTask*> nieve = {
	new SlayerTask("Aberrant spectres", 60, { 26 }),
	new SlayerTask("Abyssal demons", 85, { 35 }),
	new SlayerTask("Ankous", 1, { 95 }),
	new SlayerTask("Aviansies", 1, { 102 }),
	new SlayerTask("Black demons", 1, { 65 }),
	new SlayerTask("Black dragons", 1, { 73 }),
	new SlayerTask("Bloodvelds", 50, { 21 }),
	new SlayerTask("Blue dragons", 1, { 71 }),
	new SlayerTask("Cave horrors", 58, { 25 }),
	new SlayerTask("Dagannoths", 1, { 103 }),
	new SlayerTask("Dark beasts", 90, { 36 }),
	new SlayerTask("Dust devils", 65, { 28 }),
	new SlayerTask("Fire giants", 1, { 62 }),
	new SlayerTask("Gargoyles", 75, { 32 }),
	new SlayerTask("Greater demons", 1, { 64 }),
	new SlayerTask("Hellhounds", 1, { 98 }),
	new SlayerTask("Iron dragons", 1, { 75 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83 }),
	new SlayerTask("Kurasks", 70, { 30 }),
	new SlayerTask("Mithril dragons", 1, { 77 }),
	new SlayerTask("Mutated zygomites", 57, { 24 }),
	new SlayerTask("Nechryaels", 80, { 33 }),
	new SlayerTask("Red dragons", 1, { 72 }),
	new SlayerTask("Skeletal wyverns", 72, {  72 }),
	new SlayerTask("Smoke devils", 93, { 37 }),
	new SlayerTask("Spiritual creatures", 63, { 27, 29, 34}),
	new SlayerTask("Steel dragons", 1, { 76 }),
	new SlayerTask("Trolls", 1, { 101 }),
	new SlayerTask("Turoths", 55, { 23 }),
	new SlayerTask("TzHaars", 1, { 66, 67, 68, 69 })
};

std::vector<SlayerTask*>duradel = {
	new SlayerTask("Aberrant spectres", 60, { 26 }),
	new SlayerTask("Abyssal demons", 85, { 35 }),
	new SlayerTask("Ankous", 1, { 95 }),
	new SlayerTask("Aviansies", 1, { 102 }),
	new SlayerTask("Black demons", 1, { 65 }),
	new SlayerTask("Black dragons", 1, { 73 }),
	new SlayerTask("Bloodvelds", 50, { 21 }),
	new SlayerTask("Blue dragons", 1, { 71 }),
	new SlayerTask("Cave horrors", 58, { 25 }),
	new SlayerTask("Dagannoths", 1, { 103 }),
	new SlayerTask("Dark beasts", 90, { 36 }),
	new SlayerTask("Dust devils", 65, { 28 }),
	new SlayerTask("Fire giants", 1, { 62 }),
	new SlayerTask("Gargoyles", 75, { 32 }),
	new SlayerTask("Greater demons", 1, { 64 }),
	new SlayerTask("Hellhounds", 1, { 98 }),
	new SlayerTask("Iron dragons", 1, { 75 }),
	new SlayerTask("Kalphites", 1, { 81, 82, 83 }),
	new SlayerTask("Kurasks", 70, { 30 }),
	new SlayerTask("Mithril dragons", 1, { 77 }),
	new SlayerTask("Mutated zygomites", 57, { 24 }),
	new SlayerTask("Nechryaels", 80, { 33 }),
	new SlayerTask("Red dragons", 1, { 72 }),
	new SlayerTask("Skeletal wyverns", 72, {}),
	new SlayerTask("Smoke devils", 93, { 37 }),
	new SlayerTask("Spiritual creatures", 63, { 27, 29, 34 }),
	new SlayerTask("Steel dragons", 1, { 76 }),
	new SlayerTask("Trolls", 1, { 101 }),
	new SlayerTask("TzHaars", 1, { 66, 67, 68, 69 }),
	new SlayerTask("Waterfiends", 1, { 104 })
};