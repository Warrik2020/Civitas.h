#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsTerms") {}
    public:
        void* FromLevel(float level, void* d, void* cfg, int status) const { void* __callArgs[] = { &level, d, cfg, &status }; return CallStatic("FromLevel", __callArgs, 4); }
        void ApplyLevel(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; Call("ApplyLevel", __callArgs, 2); }
        int StatusOfLevel(float level) const { void* __callArgs[] = { &level }; return CallStaticValue<int>("StatusOfLevel", __callArgs, 1); }
        int status() const { return ReadField<int>("status"); }
        void status(int value) const { WriteField<int>("status", value); }
        float demand() const { return ReadField<float>("demand"); }
        void demand(float value) const { WriteField<float>("demand", value); }
        float load() const { return ReadField<float>("load"); }
        void load(float value) const { WriteField<float>("load", value); }
        int loadCount() const { return ReadField<int>("loadCount"); }
        void loadCount(int value) const { WriteField<int>("loadCount", value); }
        float radius() const { return ReadField<float>("radius"); }
        void radius(float value) const { WriteField<float>("radius", value); }
        float capacity() const { return ReadField<float>("capacity"); }
        void capacity(float value) const { WriteField<float>("capacity", value); }
        float network() const { return ReadField<float>("network"); }
        void network(float value) const { WriteField<float>("network", value); }
        float forage() const { return ReadField<float>("forage"); }
        void forage(float value) const { WriteField<float>("forage", value); }
        float roadGain() const { return ReadField<float>("roadGain"); }
        void roadGain(float value) const { WriteField<float>("roadGain", value); }
        int sourceKind() const { return ReadField<int>("sourceKind"); }
        void sourceKind(int value) const { WriteField<int>("sourceKind", value); }
        int sourceId() const { return ReadField<int>("sourceId"); }
        void sourceId(int value) const { WriteField<int>("sourceId", value); }
        int sourceTile() const { return ReadField<int>("sourceTile"); }
        void sourceTile(int value) const { WriteField<int>("sourceTile", value); }
        float sourceOutput() const { return ReadField<float>("sourceOutput"); }
        void sourceOutput(float value) const { WriteField<float>("sourceOutput", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void ratio(float value) const { WriteField<float>("ratio", value); }
        float strain() const { return ReadField<float>("strain"); }
        void strain(float value) const { WriteField<float>("strain", value); }
        float target() const { return ReadField<float>("target"); }
        void target(float value) const { WriteField<float>("target", value); }
        float level() const { return ReadField<float>("level"); }
        void level(float value) const { WriteField<float>("level", value); }
        float powerMul() const { return ReadField<float>("powerMul"); }
        void powerMul(float value) const { WriteField<float>("powerMul", value); }
        float orgCapMul() const { return ReadField<float>("orgCapMul"); }
        void orgCapMul(float value) const { WriteField<float>("orgCapMul", value); }
        float reinforceMul() const { return ReadField<float>("reinforceMul"); }
        void reinforceMul(float value) const { WriteField<float>("reinforceMul", value); }
        float attritionPerTick() const { return ReadField<float>("attritionPerTick"); }
        void attritionPerTick(float value) const { WriteField<float>("attritionPerTick", value); }
        float speedMul() const { return ReadField<float>("speedMul"); }
        void speedMul(float value) const { WriteField<float>("speedMul", value); }
        float orgRegenMul() const { return ReadField<float>("orgRegenMul"); }
        void orgRegenMul(float value) const { WriteField<float>("orgRegenMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
