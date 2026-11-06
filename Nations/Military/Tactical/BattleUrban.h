#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleUrban : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleUrban(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleUrban") {}
    public:
        bool Any(void* bounds) const { void* args[] = { &bounds }; return CallStaticValue<bool>("Any", args, 1); }
        int DistrictAt(void* bounds, void* districts, void* p) const { void* args[] = { &bounds, &districts, p }; return CallStaticValue<int>("DistrictAt", args, 3); }
        int BuildingAt(int district, void* districts, void* buildings, void* cellStart, void* cellItems, void* p) const { void* args[] = { &district, &districts, &buildings, &cellStart, &cellItems, p }; return CallStaticValue<int>("BuildingAt", args, 6); }
        bool Inside(void* b, void* p) const { void* args[] = { &b, p }; return CallStaticValue<bool>("Inside", args, 2); }
        void* PushOut(void* b, void* p) const { void* args[] = { &b, p }; return CallStatic("PushOut", args, 2); }
        void* Slide(void* bounds, void* districts, void* buildings, void* cellStart, void* cellItems, void* from, void* step, int mayEnter) const { void* args[] = { &bounds, &districts, &buildings, &cellStart, &cellItems, from, step, &mayEnter }; return CallStatic("Slide", args, 8); }
        bool Blocked(void* bounds, void* districts, void* buildings, void* cellStart, void* cellItems, void* from, void* to) const { void* args[] = { &bounds, &districts, &buildings, &cellStart, &cellItems, from, to }; return CallStaticValue<bool>("Blocked", args, 7); }
    };
}
