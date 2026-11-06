#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IncursionDiplomacy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionDiplomacy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IncursionDiplomacy") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        float OpinionMalus(int holder, int offender) const { void* args[] = { &holder, &offender }; return CallStaticValue<float>("OpinionMalus", args, 2); }
        float Presence(float manpower, float fullManpower, float depth) const { void* args[] = { &manpower, &fullManpower, &depth }; return CallStaticValue<float>("Presence", args, 3); }
        float StepHeat(float heat, float presence, float mul, int passTicks, bool present) const { void* args[] = { &heat, &presence, &mul, &passTicks, &present }; return CallStaticValue<float>("StepHeat", args, 5); }
        int NextTier(int tier, float heat, bool present, int count, float maxDepth, int locks, bool severe, bool excused, bool soft, bool armed = false) const { void* args[] = { &tier, &heat, &present, &count, &maxDepth, &locks, &severe, &excused, &soft, &armed }; return CallStaticValue<int>("NextTier", args, 10); }
        float OpinionTerm(int tier, float heat, int locks) const { void* args[] = { &tier, &heat, &locks }; return CallStaticValue<float>("OpinionTerm", args, 3); }
        bool Justified(void* rel, int holder) const { void* args[] = { rel, &holder }; return CallStaticValue<bool>("Justified", args, 2); }
        void GrantJustification(void* rel, int holder, int ticks) const { void* args[] = { rel, &holder, &ticks }; CallStatic("GrantJustification", args, 3); }
        float Temper(void* leader) const { void* args[] = { leader }; return CallStaticValue<float>("Temper", args, 1); }
        float JustifiedRollMul(void* leader) const { void* args[] = { leader }; return CallStaticValue<float>("JustifiedRollMul", args, 1); }
        void RecordDeclaration(void* it, int attackerId, void* rel, int defenderId, int tick) const { void* args[] = { it, &attackerId, rel, &defenderId, &tick }; CallStatic("RecordDeclaration", args, 5); }
        float Leverage(int sender, int target) const { void* args[] = { &sender, &target }; return CallStaticValue<float>("Leverage", args, 2); }
    };
}
