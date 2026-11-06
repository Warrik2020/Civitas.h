#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GameHudController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameHudController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GameHudController") {}
    public:
        void OpenResearchTree() const { Call("OpenResearchTree", nullptr, 0); }
        void OpenWars() const { Call("OpenWars", nullptr, 0); }
        void CloseLeftDock() const { CallStatic("CloseLeftDock", nullptr, 0); }
        void OpenResearch() const { Call("OpenResearch", nullptr, 0); }
        void OpenWorks() const { Call("OpenWorks", nullptr, 0); }
        void OpenQuickActions() const { Call("OpenQuickActions", nullptr, 0); }
        void OpenPolicies() const { Call("OpenPolicies", nullptr, 0); }
        void OpenOverview(void* tab) const { void* __callArgs[] = { tab }; Call("OpenOverview", __callArgs, 1); }
        void OpenRecruitment() const { Call("OpenRecruitment", nullptr, 0); }
        void ShowArmies() const { Call("ShowArmies", nullptr, 0); }
        void OpenEquipment() const { Call("OpenEquipment", nullptr, 0); }
        void OpenPeoples() const { Call("OpenPeoples", nullptr, 0); }
        void OpenPeoplesOn(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("OpenPeoplesOn", __callArgs, 2); }
        void OpenPeoplesDrawing(int axis, bool erase) const { void* __callArgs[] = { &axis, &erase }; Call("OpenPeoplesDrawing", __callArgs, 2); }
        void OpenEconomy() const { Call("OpenEconomy", nullptr, 0); }
        int MilitaryEquipmentTab() const { return ReadStaticField<int>("MilitaryEquipmentTab"); }
        int DiplomacyWarsTab() const { return ReadStaticField<int>("DiplomacyWarsTab"); }
    };
}
