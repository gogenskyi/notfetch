//
// Created by Mykola on 16.11.2026.
//

#ifndef NOTFETCH_MODEL_H
#define NOTFETCH_MODEL_H
#include <string>
#include <vector>
#include <sys/sysctl.h>

inline std::vector<std::string> ascii_logo = {
    "                     ÆMÆÆÊÑŒÆ                              ",
    "                  [ÊÊÊÊÊÊÊÊÅ¥ÁÆo                           ",
    "                 $ÑÊÊÊÊÊÊÊÊæyÜÐÊÈ                          ",
    "                 ŒÊÊÊÊÊÊÊÊÊÑÑÊÊÊÊÉ                         ",
    "                 ÆÑÆÃÆÊÊÊÊÑÑØ§ÊÊÊÑ                         ",
    "                 ŒJ  DÊÑÆ    °ŒÊÊÊ                         ",
    "                 Œ Œÿ ÃK÷ ÑÆŠ ÑÊÊÊ                         ",
    "                 Ê Mƒiº‘4‘ÈÉ~ ÊÊÊÊ                         ",
    "                 M©i|—º’¨‚‘‘››ÊÊÊÊæ                        ",
    "                 ÑL?¬—“…‚˜‡=ïoŒÆXÑÊ                        ",
    "                 ÑÊ(V>}<=ïïï”ºÊØýnæŒ                       ",
    "                [Æ­°“!¤í¡“‹    ÆÊÑÊÑÊ                    ",
    "               ÉÑ    º“›        ÊÊÊÊÊÆ                     ",
    "             qŒÊ                 ÊÊÊÊÊÊÃ                   ",
    "            ÊÑÊ§                 ŒÊÊÊÊÊÊÊ                  ",
    "           ËÊœÑ’               ¸‚ ÉŒXNÑÊÊÆ                 ",
    "          8ØœÆ                     ðËqÑ#ÊÊÊ                ",
    "          ÆbÊ                       Q€ÁMËÊÊÆ               ",
    "         ŒÒÊG                       žÊÊÊ8ÊÊÑ               ",
    "        ÉÑËÊ                         ÊÊØqÊÊÊM              ",
    "       ÆÊËæÑ                         ÊÊáŒÊÊÊÊ              ",
    "       ØÑMÞÊ                        uÊÃðBÊÊÑÑ              ",
    "       ì„“{ÊÌ                     ¿¯‰ÑÊÊÊŒøF               ",
    "      ¤¬„”„«MÑð                   ïª}ÑÊÊÊÑŒ­¬            ",
    " o!^¯¯^ª”””„|¥ÑÊÃ               ˆ‹í^*¼ŒØÂí|“ª†             ",
    " í^„”””””””””÷ÌMÊÑÊ             ˆ‚íª¯+7†×¡“³³^{            ",
    " ¤|””””””””””„ªîŒÑM             £Œrª~~““~³³³³~“^(          ",
    " ‡!„”””””””””””^o             xÑÑO1^~³³³³~~“”¦/1±          ",
    "Í¿„„^„„„””””””””|ÌÀ+       šÊÊÊÑÑfiª~~~³~^|?îuVa           ",
    "©@Jl7{•¡¯—^„„„„ª»ƒTÑÑÊÊÑÑÑÑÊÊÊÊÑÑOî«¯—¡»7IVõ               ",
    "     üù0Ìs%>)•«†oçÒ           ýÊÑFõC‡J¼óúà                 ",
    "            Ÿy¾6á×                Gý¥Zñ$                   "
};

static std::string GetStringValue(const std::string &command) {
    char line[256];
    size_t size = sizeof(line);
    if (sysctlbyname(command.c_str(),line,&size,nullptr,0)==0) {
        return line;
    }
    return {};
}

static int GetIntValue(const std::string &command) {
    int value = 0;
    size_t int_size = sizeof(value);

    if (sysctlbyname(command.c_str(), &value, &int_size, nullptr, 0) == 0) {
        return value;
    }
    return 0;
}

static long GetLongValue(const std::string &command) {
    long value = 0;
    size_t int_size = sizeof(value);

    if (sysctlbyname(command.c_str(), &value, &int_size, nullptr, 0) == 0) {
        return value;
    }
    return 0;
}

#endif //NOTFETCH_MODEL_H
