#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Alerts
{
    class AlertRoutes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AlertRoutes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Alerts", "AlertRoutes") {}
    public:
        void Economy() const { CallStatic("Economy", nullptr, 0); }
        void Armoury() const { CallStatic("Armoury", nullptr, 0); }
        void ArmouryStarved() const { CallStatic("ArmouryStarved", nullptr, 0); }
        void ArmouryWorks() const { CallStatic("ArmouryWorks", nullptr, 0); }
        void ArmouryShort() const { CallStatic("ArmouryShort", nullptr, 0); }
        void Templates() const { CallStatic("Templates", nullptr, 0); }
        void Recruitment() const { CallStatic("Recruitment", nullptr, 0); }
        void Government() const { CallStatic("Government", nullptr, 0); }
        void Stability() const { CallStatic("Stability", nullptr, 0); }
        void Actions() const { CallStatic("Actions", nullptr, 0); }
        void Peoples() const { CallStatic("Peoples", nullptr, 0); }
        void Research() const { CallStatic("Research", nullptr, 0); }
        void QuickActions() const { CallStatic("QuickActions", nullptr, 0); }
        void PeaceTable(int enemyId) const { void* __callArgs[] = { &enemyId }; CallStatic("PeaceTable", __callArgs, 1); }
        void OverdueLevies() const { CallStatic("OverdueLevies", nullptr, 0); }
        void TroopsAbroad() const { CallStatic("TroopsAbroad", nullptr, 0); }
        void ForeignTroops() const { CallStatic("ForeignTroops", nullptr, 0); }
        void LockedDown() const { CallStatic("LockedDown", nullptr, 0); }
        void FlyToTile(int tile, int nationId) const { void* __callArgs[] = { &tile, &nationId }; CallStatic("FlyToTile", __callArgs, 2); }
        void Overstretched() const { CallStatic("Overstretched", nullptr, 0); }
        void Encircled() const { CallStatic("Encircled", nullptr, 0); }
    };
}
