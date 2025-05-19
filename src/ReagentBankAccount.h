#ifndef AZEROTHCORE_REAGENTBANKACCOUNT_H
#define AZEROTHCORE_REAGENTBANKACCOUNT_H
#include "Chat.h"
#include "Config.h"
#include "Item.h"
#include "ItemTemplate.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include <map>

#define DEFAULT_MAX_OPTIONS 7
#define MAX_PAGE_NUMBER 700 // Values higher than this are considered Item IDs
#define NPC_TEXT_ID 4259    // Pre-existing NPC text

enum GossipItemType : uint8 {
  DEPOSIT_ALL_REAGENTS = 16,
  MAIN_MENU = 17,
  WITHDRAW_ALL_REAGENTS = 102
};

extern uint32 g_maxOptionsPerPage;
extern bool g_accountWideReagentBank;

#endif // AZEROTHCORE_REAGENTBANKACCOUNT_H
