#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleWeapons : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleWeapons(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleWeapons") {}
    public:
        bool HasTrenchWarfare(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("HasTrenchWarfare", __callArgs, 1); }
        int EraOf(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("EraOf", __callArgs, 1); }
        int AgeOf(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("AgeOf", __callArgs, 1); }
        float DoctrineTier(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("DoctrineTier", __callArgs, 1); }
        void* FromDivision(void* d, void* it) const { void* __callArgs[] = { d, it }; return CallStatic("FromDivision", __callArgs, 2); }
        float DesignFireMul(void* design, void* s, bool volleys) const { void* __callArgs[] = { design, s, &volleys }; return CallStaticValue<float>("DesignFireMul", __callArgs, 3); }
        void ArmourProtection(void* protection, float& fire, float& melee) const { void* __callArgs[] = { protection, &fire, &melee }; CallStatic("ArmourProtection", __callArgs, 3); }
        int GunsFor(void* d, void* it, void* cfg) const { void* __callArgs[] = { d, it, cfg }; return CallStaticValue<int>("GunsFor", __callArgs, 3); }
        void ComposeArmour(void* d, void* it, int& tanks, int& trucks, int& riflemen) const { void* __callArgs[] = { d, it, &tanks, &trucks, &riflemen }; CallStatic("ComposeArmour", __callArgs, 5); }
        int ArmOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("ArmOf", __callArgs, 1); }
    };
}
