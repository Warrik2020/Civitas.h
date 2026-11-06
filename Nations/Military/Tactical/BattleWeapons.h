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
        bool HasTrenchWarfare(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("HasTrenchWarfare", args, 1); }
        int EraOf(void* it) const { void* args[] = { it }; return CallStaticValue<int>("EraOf", args, 1); }
        int AgeOf(void* it) const { void* args[] = { it }; return CallStaticValue<int>("AgeOf", args, 1); }
        float DoctrineTier(void* it) const { void* args[] = { it }; return CallStaticValue<float>("DoctrineTier", args, 1); }
        void* FromDivision(void* d, void* it) const { void* args[] = { d, it }; return CallStatic("FromDivision", args, 2); }
        float DesignFireMul(void* design, void* s, bool volleys) const { void* args[] = { design, s, &volleys }; return CallStaticValue<float>("DesignFireMul", args, 3); }
        void ArmourProtection(void* protection, float& fire, float& melee) const { void* args[] = { protection, &fire, &melee }; CallStatic("ArmourProtection", args, 3); }
        int GunsFor(void* d, void* it, void* cfg) const { void* args[] = { d, it, cfg }; return CallStaticValue<int>("GunsFor", args, 3); }
        void ComposeArmour(void* d, void* it, int& tanks, int& trucks, int& riflemen) const { void* args[] = { d, it, &tanks, &trucks, &riflemen }; CallStatic("ComposeArmour", args, 5); }
        int ArmOf(int t) const { void* args[] = { &t }; return CallStaticValue<int>("ArmOf", args, 1); }
    };
}
