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
        float OpinionMalus(int holder, int offender) const { void* __callArgs[] = { &holder, &offender }; return CallStaticValue<float>("OpinionMalus", __callArgs, 2); }
        float Presence(float manpower, float fullManpower, float depth) const { void* __callArgs[] = { &manpower, &fullManpower, &depth }; return CallStaticValue<float>("Presence", __callArgs, 3); }
        float StepHeat(float heat, float presence, float mul, int passTicks, bool present) const { void* __callArgs[] = { &heat, &presence, &mul, &passTicks, &present }; return CallStaticValue<float>("StepHeat", __callArgs, 5); }
        int NextTier(int tier, float heat, bool present, int count, float maxDepth, int locks, bool severe, bool excused, bool soft, bool armed = false) const { void* __callArgs[] = { &tier, &heat, &present, &count, &maxDepth, &locks, &severe, &excused, &soft, &armed }; return CallStaticValue<int>("NextTier", __callArgs, 10); }
        float OpinionTerm(int tier, float heat, int locks) const { void* __callArgs[] = { &tier, &heat, &locks }; return CallStaticValue<float>("OpinionTerm", __callArgs, 3); }
        bool Justified(void* rel, int holder) const { void* __callArgs[] = { rel, &holder }; return CallStaticValue<bool>("Justified", __callArgs, 2); }
        void GrantJustification(void* rel, int holder, int ticks) const { void* __callArgs[] = { rel, &holder, &ticks }; CallStatic("GrantJustification", __callArgs, 3); }
        float Temper(void* leader) const { void* __callArgs[] = { leader }; return CallStaticValue<float>("Temper", __callArgs, 1); }
        float JustifiedRollMul(void* leader) const { void* __callArgs[] = { leader }; return CallStaticValue<float>("JustifiedRollMul", __callArgs, 1); }
        void RecordDeclaration(void* it, int attackerId, void* rel, int defenderId, int tick) const { void* __callArgs[] = { it, &attackerId, rel, &defenderId, &tick }; CallStatic("RecordDeclaration", __callArgs, 5); }
        float Leverage(int sender, int target) const { void* __callArgs[] = { &sender, &target }; return CallStaticValue<float>("Leverage", __callArgs, 2); }
    };
}
