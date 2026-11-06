#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Temperament : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Temperament(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Temperament") {}
    public:
        void* PeopleNudge(int trait) const { void* __callArgs[] = { &trait }; return CallStatic("PeopleNudge", __callArgs, 1); }
        int PeopleTrait(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("PeopleTrait", __callArgs, 1); }
        float Aggression(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("Aggression", __callArgs, 1); }
        float Expansionism(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("Expansionism", __callArgs, 1); }
        float Sociability(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("Sociability", __callArgs, 1); }
        float Threat(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("Threat", __callArgs, 1); }
        void* KindOf(void* it) const { void* __callArgs[] = { it }; return CallStatic("KindOf", __callArgs, 1); }
        void* Label(void* k) const { void* __callArgs[] = { k }; return CallStatic("Label", __callArgs, 1); }
        void* Phrase(void* k) const { void* __callArgs[] = { k }; return CallStatic("Phrase", __callArgs, 1); }
        void* ColorOf(void* k) const { void* __callArgs[] = { k }; return CallStatic("ColorOf", __callArgs, 1); }
        bool IsHostile(void* k) const { void* __callArgs[] = { k }; return CallStaticValue<bool>("IsHostile", __callArgs, 1); }
        float UltimatumRatioMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("UltimatumRatioMul", __callArgs, 1); }
        float UltimatumOpinionShift(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("UltimatumOpinionShift", __callArgs, 1); }
        float CoercionChanceMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("CoercionChanceMul", __callArgs, 1); }
        float CoercionCooldownMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("CoercionCooldownMul", __callArgs, 1); }
        float BackChance(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("BackChance", __callArgs, 1); }
        bool DemandsLand(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("DemandsLand", __callArgs, 1); }
        int PrepMinTicks(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("PrepMinTicks", __callArgs, 1); }
        void* PeopleLeaning(int trait) const { void* __callArgs[] = { &trait }; return CallStatic("PeopleLeaning", __callArgs, 1); }
        void AppendHabits(void* sb, void* it, const char* separator = "\n") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, it, managed_2 }; CallStatic("AppendHabits", __callArgs, 3); }
        float BackMinAggression() const { return ReadStaticField<float>("BackMinAggression"); }
        int PrepMaxTicks() const { return ReadStaticField<int>("PrepMaxTicks"); }
        float BoldAbove() const { return ReadStaticField<float>("BoldAbove"); }
        float CarefulBelow() const { return ReadStaticField<float>("CarefulBelow"); }
    };
}
