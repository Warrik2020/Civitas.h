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
        bool Any(void* bounds) const { void* __callArgs[] = { &bounds }; return CallStaticValue<bool>("Any", __callArgs, 1); }
        int DistrictAt(void* bounds, void* districts, void* p) const { void* __callArgs[] = { &bounds, &districts, p }; return CallStaticValue<int>("DistrictAt", __callArgs, 3); }
        int BuildingAt(int district, void* districts, void* buildings, void* cellStart, void* cellItems, void* p) const { void* __callArgs[] = { &district, &districts, &buildings, &cellStart, &cellItems, p }; return CallStaticValue<int>("BuildingAt", __callArgs, 6); }
        bool Inside(void* b, void* p) const { void* __callArgs[] = { &b, p }; return CallStaticValue<bool>("Inside", __callArgs, 2); }
        void* PushOut(void* b, void* p) const { void* __callArgs[] = { &b, p }; return CallStatic("PushOut", __callArgs, 2); }
        void* Slide(void* bounds, void* districts, void* buildings, void* cellStart, void* cellItems, void* from, void* step, int mayEnter) const { void* __callArgs[] = { &bounds, &districts, &buildings, &cellStart, &cellItems, from, step, &mayEnter }; return CallStatic("Slide", __callArgs, 8); }
        bool Blocked(void* bounds, void* districts, void* buildings, void* cellStart, void* cellItems, void* from, void* to) const { void* __callArgs[] = { &bounds, &districts, &buildings, &cellStart, &cellItems, from, to }; return CallStaticValue<bool>("Blocked", __callArgs, 7); }
    };
}
