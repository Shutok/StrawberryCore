/* Copyright (C) 2006 - 2012 ScriptDev2 <http://www.scriptdev2.com/>
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_SCARLETM_H
#define DEF_SCARLETM_H

enum
{
    MAX_ENCOUNTER                   = 1,

    TYPE_MOGRAINE_AND_WHITE_EVENT   = 1,

    NPC_MOGRAINE                    = 3976,
    NPC_WHITEMANE                   = 3977,
    NPC_VORREL                      = 3981,
    NPC_INTERROGATOR_VISHAS         = 3983,

    GO_WHITEMANE_DOOR               = 104600,

    SAY_TRIGGER_VORREL              = -1189015,
};

class instance_scarlet_monastery : public ScriptedInstance
{
    public:
        instance_scarlet_monastery(Map* pMap);

        void Initialize();

        void OnCreatureCreate(Creature* pCreature);
        void OnCreatureDeath(Creature* pCreature);
        void OnObjectCreate(GameObject* pGo);

        void SetData(uint32 uiType, uint32 uiData);
        uint32 GetData(uint32 uiData);

    private:
        uint32 m_auiEncounter[MAX_ENCOUNTER];
};

#endif
