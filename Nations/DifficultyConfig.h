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
        bool IsAi(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("IsAi", __callArgs, 1); }
        void SetLevel(int v) const { void* __callArgs[] = { &v }; Call("SetLevel", __callArgs, 1); }
        float Curve(float atOne, float atStandard, float atMax) const { void* __callArgs[] = { &atOne, &atStandard, &atMax }; return CallValue<float>("Curve", __callArgs, 3); }
        float Mul(float atOne, float atMax) const { void* __callArgs[] = { &atOne, &atMax }; return CallValue<float>("Mul", __callArgs, 2); }
        void ApplyTo(int nationId, void* m, float& researchSpeedMul) const { void* __callArgs[] = { &nationId, &m, &researchSpeedMul }; Call("ApplyTo", __callArgs, 3); }
        void SetAggression(int v) const { void* __callArgs[] = { &v }; Call("SetAggression", __callArgs, 1); }
        float Aggr(float atZero, float atStandard, float atMax) const { void* __callArgs[] = { &atZero, &atStandard, &atMax }; return CallValue<float>("Aggr", __callArgs, 3); }
        bool Peaceful(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Peaceful", __callArgs, 1); }
        int MaxWars(int nationId, int baseCap) const { void* __callArgs[] = { &nationId, &baseCap }; return CallValue<int>("MaxWars", __callArgs, 2); }
        int DeclareCooldown(int nationId, int baseTicks) const { void* __callArgs[] = { &nationId, &baseTicks }; return CallValue<int>("DeclareCooldown", __callArgs, 2); }
        void* AggressionLabel(int aggression) const { void* __callArgs[] = { &aggression }; return CallStatic("AggressionLabel", __callArgs, 1); }
        void* AggressionLabel() const { return Call("AggressionLabel", nullptr, 0); }
        void* Label(int level) const { void* __callArgs[] = { &level }; return CallStatic("Label", __callArgs, 1); }
        void* Label() const { return Call("Label", nullptr, 0); }
        int LevelFromMaster(float master) const { void* __callArgs[] = { &master }; return CallStaticValue<int>("LevelFromMaster", __callArgs, 1); }
        int MinLevel() const { return ReadStaticField<int>("MinLevel"); }
        int MaxLevel() const { return ReadStaticField<int>("MaxLevel"); }
        int Standard() const { return ReadStaticField<int>("Standard"); }
        int level() const { return ReadField<int>("level"); }
        void level(int value) const { WriteField<int>("level", value); }
        int MinAggression() const { return ReadStaticField<int>("MinAggression"); }
        int MaxAggression() const { return ReadStaticField<int>("MaxAggression"); }
        int aggression() const { return ReadField<int>("aggression"); }
        void aggression(int value) const { WriteField<int>("aggression", value); }
    };
}
