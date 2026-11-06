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
        void* PeopleNudge(int trait) const { void* args[] = { &trait }; return CallStatic("PeopleNudge", args, 1); }
        int PeopleTrait(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("PeopleTrait", args, 1); }
        float Aggression(void* it) const { void* args[] = { it }; return CallStaticValue<float>("Aggression", args, 1); }
        float Expansionism(void* it) const { void* args[] = { it }; return CallStaticValue<float>("Expansionism", args, 1); }
        float Sociability(void* it) const { void* args[] = { it }; return CallStaticValue<float>("Sociability", args, 1); }
        float Threat(void* it) const { void* args[] = { it }; return CallStaticValue<float>("Threat", args, 1); }
        void* KindOf(void* it) const { void* args[] = { it }; return CallStatic("KindOf", args, 1); }
        void* Label(void* k) const { void* args[] = { k }; return CallStatic("Label", args, 1); }
        void* Phrase(void* k) const { void* args[] = { k }; return CallStatic("Phrase", args, 1); }
        void* ColorOf(void* k) const { void* args[] = { k }; return CallStatic("ColorOf", args, 1); }
        bool IsHostile(void* k) const { void* args[] = { k }; return CallStaticValue<bool>("IsHostile", args, 1); }
        float UltimatumRatioMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("UltimatumRatioMul", args, 1); }
        float UltimatumOpinionShift(void* it) const { void* args[] = { it }; return CallStaticValue<float>("UltimatumOpinionShift", args, 1); }
        float CoercionChanceMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("CoercionChanceMul", args, 1); }
        float CoercionCooldownMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("CoercionCooldownMul", args, 1); }
        float BackChance(void* it) const { void* args[] = { it }; return CallStaticValue<float>("BackChance", args, 1); }
        bool DemandsLand(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("DemandsLand", args, 1); }
        int PrepMinTicks(void* it) const { void* args[] = { it }; return CallStaticValue<int>("PrepMinTicks", args, 1); }
        void* PeopleLeaning(int trait) const { void* args[] = { &trait }; return CallStatic("PeopleLeaning", args, 1); }
        void AppendHabits(void* sb, void* it, const char* separator = "\n") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, it, managed_2 }; CallStatic("AppendHabits", args, 3); }
        float BackMinAggression() const { return ReadStaticField<float>("BackMinAggression"); }
        int PrepMaxTicks() const { return ReadStaticField<int>("PrepMaxTicks"); }
        float BoldAbove() const { return ReadStaticField<float>("BoldAbove"); }
        float CarefulBelow() const { return ReadStaticField<float>("CarefulBelow"); }
    };
}
