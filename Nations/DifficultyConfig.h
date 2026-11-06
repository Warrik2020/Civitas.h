#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class DifficultyConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DifficultyConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "DifficultyConfig") {}
    public:
        bool IsAi(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("IsAi", args, 1); }
        void SetLevel(int v) const { void* args[] = { &v }; Call("SetLevel", args, 1); }
        float Curve(float atOne, float atStandard, float atMax) const { void* args[] = { &atOne, &atStandard, &atMax }; return CallValue<float>("Curve", args, 3); }
        float Mul(float atOne, float atMax) const { void* args[] = { &atOne, &atMax }; return CallValue<float>("Mul", args, 2); }
        void ApplyTo(int nationId, void* m, float& researchSpeedMul) const { void* args[] = { &nationId, &m, &researchSpeedMul }; Call("ApplyTo", args, 3); }
        void SetAggression(int v) const { void* args[] = { &v }; Call("SetAggression", args, 1); }
        float Aggr(float atZero, float atStandard, float atMax) const { void* args[] = { &atZero, &atStandard, &atMax }; return CallValue<float>("Aggr", args, 3); }
        bool Peaceful(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Peaceful", args, 1); }
        int MaxWars(int nationId, int baseCap) const { void* args[] = { &nationId, &baseCap }; return CallValue<int>("MaxWars", args, 2); }
        int DeclareCooldown(int nationId, int baseTicks) const { void* args[] = { &nationId, &baseTicks }; return CallValue<int>("DeclareCooldown", args, 2); }
        void* AggressionLabel(int aggression) const { void* args[] = { &aggression }; return CallStatic("AggressionLabel", args, 1); }
        void* AggressionLabel() const { return Call("AggressionLabel", nullptr, 0); }
        void* Label(int level) const { void* args[] = { &level }; return CallStatic("Label", args, 1); }
        void* Label() const { return Call("Label", nullptr, 0); }
        int LevelFromMaster(float master) const { void* args[] = { &master }; return CallStaticValue<int>("LevelFromMaster", args, 1); }
        int MinLevel() const { return ReadStaticField<int>("MinLevel"); }
        int MaxLevel() const { return ReadStaticField<int>("MaxLevel"); }
        int Standard() const { return ReadStaticField<int>("Standard"); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        int MinAggression() const { return ReadStaticField<int>("MinAggression"); }
        int MaxAggression() const { return ReadStaticField<int>("MaxAggression"); }
        int aggression() const { return ReadField<int>("aggression"); }
        void SetAggression(int value) const { WriteField<int>("aggression", value); }
    };
}
