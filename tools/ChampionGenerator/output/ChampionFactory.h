#ifndef _CHAMPION_FACTORY_H
#define _CHAMPION_FACTORY_H

#include "Champions/Aatrox/Aatrox.h"
#include "Champions/Thresh/Thresh.h"
#include "Champions/Tryndamere/Tryndamere.h"
#include "Champions/Gragas/Gragas.h"
#include "Champions/Cassiopeia/Cassiopeia.h"
#include "Champions/Poppy/Poppy.h"
#include "Champions/Ryze/Ryze.h"
#include "Champions/Sion/Sion.h"
#include "Champions/Annie/Annie.h"
#include "Champions/Karma/Karma.h"
#include "Champions/Nautilus/Nautilus.h"
#include "Champions/Lux/Lux.h"
#include "Champions/Ahri/Ahri.h"
#include "Champions/Olaf/Olaf.h"
#include "Champions/Viktor/Viktor.h"
#include "Champions/Anivia/Anivia.h"
#include "Champions/Garen/Garen.h"
#include "Champions/Singed/Singed.h"
#include "Champions/Lissandra/Lissandra.h"
#include "Champions/Maokai/Maokai.h"
#include "Champions/Morgana/Morgana.h"
#include "Champions/Evelynn/Evelynn.h"
#include "Champions/Fizz/Fizz.h"
#include "Champions/Zed/Zed.h"
#include "Champions/Heimerdinger/Heimerdinger.h"
#include "Champions/Rumble/Rumble.h"
#include "Champions/Mordekaiser/Mordekaiser.h"
#include "Champions/Sona/Sona.h"
#include "Champions/Katarina/Katarina.h"
#include "Champions/KogMaw/KogMaw.h"
#include "Champions/Ashe/Ashe.h"
#include "Champions/Lulu/Lulu.h"
#include "Champions/Karthus/Karthus.h"
#include "Champions/Alistar/Alistar.h"
#include "Champions/Darius/Darius.h"
#include "Champions/Vayne/Vayne.h"
#include "Champions/Varus/Varus.h"
#include "Champions/Udyr/Udyr.h"
#include "Champions/Jayce/Jayce.h"
#include "Champions/Leona/Leona.h"
#include "Champions/Syndra/Syndra.h"
#include "Champions/Pantheon/Pantheon.h"
#include "Champions/KhaZix/KhaZix.h"
#include "Champions/Riven/Riven.h"
#include "Champions/Corki/Corki.h"
#include "Champions/Caitlyn/Caitlyn.h"
#include "Champions/Nidalee/Nidalee.h"
#include "Champions/Galio/Galio.h"
#include "Champions/Kennen/Kennen.h"
#include "Champions/Veigar/Veigar.h"
#include "Champions/Graves/Graves.h"
#include "Champions/Malzahar/Malzahar.h"
#include "Champions/Vi/Vi.h"
#include "Champions/Kayle/Kayle.h"
#include "Champions/Irelia/Irelia.h"
#include "Champions/LeeSin/LeeSin.h"
#include "Champions/Elise/Elise.h"
#include "Champions/Volibear/Volibear.h"
#include "Champions/Nunu/Nunu.h"
#include "Champions/TwistedFate/TwistedFate.h"
#include "Champions/Jax/Jax.h"
#include "Champions/Shyvana/Shyvana.h"
#include "Champions/DrMundo/DrMundo.h"
#include "Champions/Brand/Brand.h"
#include "Champions/Diana/Diana.h"
#include "Champions/Sejuani/Sejuani.h"
#include "Champions/Vladimir/Vladimir.h"
#include "Champions/Zac/Zac.h"
#include "Champions/Quinn/Quinn.h"
#include "Champions/Akali/Akali.h"
#include "Champions/Tristana/Tristana.h"
#include "Champions/Hecarim/Hecarim.h"
#include "Champions/Sivir/Sivir.h"
#include "Champions/Lucian/Lucian.h"
#include "Champions/Rengar/Rengar.h"
#include "Champions/Warwick/Warwick.h"
#include "Champions/Skarner/Skarner.h"
#include "Champions/Malphite/Malphite.h"
#include "Champions/Yasuo/Yasuo.h"
#include "Champions/Xerath/Xerath.h"
#include "Champions/Teemo/Teemo.h"
#include "Champions/Nasus/Nasus.h"
#include "Champions/Renekton/Renekton.h"
#include "Champions/Draven/Draven.h"
#include "Champions/Shaco/Shaco.h"
#include "Champions/Swain/Swain.h"
#include "Champions/Ziggs/Ziggs.h"
#include "Champions/Janna/Janna.h"
#include "Champions/Talon/Talon.h"
#include "Champions/Orianna/Orianna.h"
#include "Champions/Fiddlesticks/Fiddlesticks.h"
#include "Champions/Fiora/Fiora.h"
#include "Champions/ChoGath/ChoGath.h"
#include "Champions/Rammus/Rammus.h"
#include "Champions/LeBlanc/LeBlanc.h"
#include "Champions/Zilean/Zilean.h"
#include "Champions/Soraka/Soraka.h"
#include "Champions/Nocturne/Nocturne.h"
#include "Champions/Jinx/Jinx.h"
#include "Champions/Yorick/Yorick.h"
#include "Champions/Urgot/Urgot.h"
#include "Champions/MissFortune/MissFortune.h"
#include "Champions/Wukong/Wukong.h"
#include "Champions/Blitzcrank/Blitzcrank.h"
#include "Champions/Shen/Shen.h"
#include "Champions/Braum/Braum.h"
#include "Champions/XinZhao/XinZhao.h"
#include "Champions/Twitch/Twitch.h"
#include "Champions/MasterYi/MasterYi.h"
#include "Champions/Taric/Taric.h"
#include "Champions/Amumu/Amumu.h"
#include "Champions/Gangplank/Gangplank.h"
#include "Champions/Trundle/Trundle.h"
#include "Champions/Kassadin/Kassadin.h"
#include "Champions/VelKoz/VelKoz.h"
#include "Champions/Zyra/Zyra.h"
#include "Champions/Nami/Nami.h"
#include "Champions/JarvanIV/JarvanIV.h"
#include "Champions/Ezreal/Ezreal.h"

class ChampionFactory {

    public:

    /**
     * Todo : Code every champion and add em here..
     */
    static Champion* getChampionFromType(const std::string& type, Map* map, uint32 id) {
        if(type == "Aatrox") {
            return new Aatrox(map, id);
        }
        if(type == "Thresh") {
            return new Thresh(map, id);
        }
        if(type == "Tryndamere") {
            return new Tryndamere(map, id);
        }
        if(type == "Gragas") {
            return new Gragas(map, id);
        }
        if(type == "Cassiopeia") {
            return new Cassiopeia(map, id);
        }
        if(type == "Poppy") {
            return new Poppy(map, id);
        }
        if(type == "Ryze") {
            return new Ryze(map, id);
        }
        if(type == "Sion") {
            return new Sion(map, id);
        }
        if(type == "Annie") {
            return new Annie(map, id);
        }
        if(type == "Karma") {
            return new Karma(map, id);
        }
        if(type == "Nautilus") {
            return new Nautilus(map, id);
        }
        if(type == "Lux") {
            return new Lux(map, id);
        }
        if(type == "Ahri") {
            return new Ahri(map, id);
        }
        if(type == "Olaf") {
            return new Olaf(map, id);
        }
        if(type == "Viktor") {
            return new Viktor(map, id);
        }
        if(type == "Anivia") {
            return new Anivia(map, id);
        }
        if(type == "Garen") {
            return new Garen(map, id);
        }
        if(type == "Singed") {
            return new Singed(map, id);
        }
        if(type == "Lissandra") {
            return new Lissandra(map, id);
        }
        if(type == "Maokai") {
            return new Maokai(map, id);
        }
        if(type == "Morgana") {
            return new Morgana(map, id);
        }
        if(type == "Evelynn") {
            return new Evelynn(map, id);
        }
        if(type == "Fizz") {
            return new Fizz(map, id);
        }
        if(type == "Zed") {
            return new Zed(map, id);
        }
        if(type == "Heimerdinger") {
            return new Heimerdinger(map, id);
        }
        if(type == "Rumble") {
            return new Rumble(map, id);
        }
        if(type == "Mordekaiser") {
            return new Mordekaiser(map, id);
        }
        if(type == "Sona") {
            return new Sona(map, id);
        }
        if(type == "Katarina") {
            return new Katarina(map, id);
        }
        if(type == "KogMaw") {
            return new KogMaw(map, id);
        }
        if(type == "Ashe") {
            return new Ashe(map, id);
        }
        if(type == "Lulu") {
            return new Lulu(map, id);
        }
        if(type == "Karthus") {
            return new Karthus(map, id);
        }
        if(type == "Alistar") {
            return new Alistar(map, id);
        }
        if(type == "Darius") {
            return new Darius(map, id);
        }
        if(type == "Vayne") {
            return new Vayne(map, id);
        }
        if(type == "Varus") {
            return new Varus(map, id);
        }
        if(type == "Udyr") {
            return new Udyr(map, id);
        }
        if(type == "Jayce") {
            return new Jayce(map, id);
        }
        if(type == "Leona") {
            return new Leona(map, id);
        }
        if(type == "Syndra") {
            return new Syndra(map, id);
        }
        if(type == "Pantheon") {
            return new Pantheon(map, id);
        }
        if(type == "KhaZix") {
            return new KhaZix(map, id);
        }
        if(type == "Riven") {
            return new Riven(map, id);
        }
        if(type == "Corki") {
            return new Corki(map, id);
        }
        if(type == "Caitlyn") {
            return new Caitlyn(map, id);
        }
        if(type == "Nidalee") {
            return new Nidalee(map, id);
        }
        if(type == "Galio") {
            return new Galio(map, id);
        }
        if(type == "Kennen") {
            return new Kennen(map, id);
        }
        if(type == "Veigar") {
            return new Veigar(map, id);
        }
        if(type == "Graves") {
            return new Graves(map, id);
        }
        if(type == "Malzahar") {
            return new Malzahar(map, id);
        }
        if(type == "Vi") {
            return new Vi(map, id);
        }
        if(type == "Kayle") {
            return new Kayle(map, id);
        }
        if(type == "Irelia") {
            return new Irelia(map, id);
        }
        if(type == "LeeSin") {
            return new LeeSin(map, id);
        }
        if(type == "Elise") {
            return new Elise(map, id);
        }
        if(type == "Volibear") {
            return new Volibear(map, id);
        }
        if(type == "Nunu") {
            return new Nunu(map, id);
        }
        if(type == "TwistedFate") {
            return new TwistedFate(map, id);
        }
        if(type == "Jax") {
            return new Jax(map, id);
        }
        if(type == "Shyvana") {
            return new Shyvana(map, id);
        }
        if(type == "DrMundo") {
            return new DrMundo(map, id);
        }
        if(type == "Brand") {
            return new Brand(map, id);
        }
        if(type == "Diana") {
            return new Diana(map, id);
        }
        if(type == "Sejuani") {
            return new Sejuani(map, id);
        }
        if(type == "Vladimir") {
            return new Vladimir(map, id);
        }
        if(type == "Zac") {
            return new Zac(map, id);
        }
        if(type == "Quinn") {
            return new Quinn(map, id);
        }
        if(type == "Akali") {
            return new Akali(map, id);
        }
        if(type == "Tristana") {
            return new Tristana(map, id);
        }
        if(type == "Hecarim") {
            return new Hecarim(map, id);
        }
        if(type == "Sivir") {
            return new Sivir(map, id);
        }
        if(type == "Lucian") {
            return new Lucian(map, id);
        }
        if(type == "Rengar") {
            return new Rengar(map, id);
        }
        if(type == "Warwick") {
            return new Warwick(map, id);
        }
        if(type == "Skarner") {
            return new Skarner(map, id);
        }
        if(type == "Malphite") {
            return new Malphite(map, id);
        }
        if(type == "Yasuo") {
            return new Yasuo(map, id);
        }
        if(type == "Xerath") {
            return new Xerath(map, id);
        }
        if(type == "Teemo") {
            return new Teemo(map, id);
        }
        if(type == "Nasus") {
            return new Nasus(map, id);
        }
        if(type == "Renekton") {
            return new Renekton(map, id);
        }
        if(type == "Draven") {
            return new Draven(map, id);
        }
        if(type == "Shaco") {
            return new Shaco(map, id);
        }
        if(type == "Swain") {
            return new Swain(map, id);
        }
        if(type == "Ziggs") {
            return new Ziggs(map, id);
        }
        if(type == "Janna") {
            return new Janna(map, id);
        }
        if(type == "Talon") {
            return new Talon(map, id);
        }
        if(type == "Orianna") {
            return new Orianna(map, id);
        }
        if(type == "Fiddlesticks") {
            return new Fiddlesticks(map, id);
        }
        if(type == "Fiora") {
            return new Fiora(map, id);
        }
        if(type == "ChoGath") {
            return new ChoGath(map, id);
        }
        if(type == "Rammus") {
            return new Rammus(map, id);
        }
        if(type == "LeBlanc") {
            return new LeBlanc(map, id);
        }
        if(type == "Zilean") {
            return new Zilean(map, id);
        }
        if(type == "Soraka") {
            return new Soraka(map, id);
        }
        if(type == "Nocturne") {
            return new Nocturne(map, id);
        }
        if(type == "Jinx") {
            return new Jinx(map, id);
        }
        if(type == "Yorick") {
            return new Yorick(map, id);
        }
        if(type == "Urgot") {
            return new Urgot(map, id);
        }
        if(type == "MissFortune") {
            return new MissFortune(map, id);
        }
        if(type == "Wukong") {
            return new Wukong(map, id);
        }
        if(type == "Blitzcrank") {
            return new Blitzcrank(map, id);
        }
        if(type == "Shen") {
            return new Shen(map, id);
        }
        if(type == "Braum") {
            return new Braum(map, id);
        }
        if(type == "XinZhao") {
            return new XinZhao(map, id);
        }
        if(type == "Twitch") {
            return new Twitch(map, id);
        }
        if(type == "MasterYi") {
            return new MasterYi(map, id);
        }
        if(type == "Taric") {
            return new Taric(map, id);
        }
        if(type == "Amumu") {
            return new Amumu(map, id);
        }
        if(type == "Gangplank") {
            return new Gangplank(map, id);
        }
        if(type == "Trundle") {
            return new Trundle(map, id);
        }
        if(type == "Kassadin") {
            return new Kassadin(map, id);
        }
        if(type == "VelKoz") {
            return new VelKoz(map, id);
        }
        if(type == "Zyra") {
            return new Zyra(map, id);
        }
        if(type == "Nami") {
            return new Nami(map, id);
        }
        if(type == "JarvanIV") {
            return new JarvanIV(map, id);
        }
        if(type == "Ezreal") {
            return new Ezreal(map, id);
        }

        return new Champion(type, map, id);
    }


};

#endif