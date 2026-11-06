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
        void* FromLevel(float level, void* d, void* cfg, int status) const { void* args[] = { &level, d, cfg, &status }; return CallStatic("FromLevel", args, 4); }
        void ApplyLevel(void* d, void* cfg) const { void* args[] = { d, cfg }; Call("ApplyLevel", args, 2); }
        int StatusOfLevel(float level) const { void* args[] = { &level }; return CallStaticValue<int>("StatusOfLevel", args, 1); }
        int status() const { return ReadField<int>("status"); }
        void SetStatus(int value) const { WriteField<int>("status", value); }
        float demand() const { return ReadField<float>("demand"); }
        void SetDemand(float value) const { WriteField<float>("demand", value); }
        float load() const { return ReadField<float>("load"); }
        void SetLoad(float value) const { WriteField<float>("load", value); }
        int loadCount() const { return ReadField<int>("loadCount"); }
        void SetLoadCount(int value) const { WriteField<int>("loadCount", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        float capacity() const { return ReadField<float>("capacity"); }
        void SetCapacity(float value) const { WriteField<float>("capacity", value); }
        float network() const { return ReadField<float>("network"); }
        void SetNetwork(float value) const { WriteField<float>("network", value); }
        float forage() const { return ReadField<float>("forage"); }
        void SetForage(float value) const { WriteField<float>("forage", value); }
        float roadGain() const { return ReadField<float>("roadGain"); }
        void SetRoadGain(float value) const { WriteField<float>("roadGain", value); }
        int sourceKind() const { return ReadField<int>("sourceKind"); }
        void SetSourceKind(int value) const { WriteField<int>("sourceKind", value); }
        int sourceId() const { return ReadField<int>("sourceId"); }
        void SetSourceId(int value) const { WriteField<int>("sourceId", value); }
        int sourceTile() const { return ReadField<int>("sourceTile"); }
        void SetSourceTile(int value) const { WriteField<int>("sourceTile", value); }
        float sourceOutput() const { return ReadField<float>("sourceOutput"); }
        void SetSourceOutput(float value) const { WriteField<float>("sourceOutput", value); }
        float ratio() const { return ReadField<float>("ratio"); }
        void SetRatio(float value) const { WriteField<float>("ratio", value); }
        float strain() const { return ReadField<float>("strain"); }
        void SetStrain(float value) const { WriteField<float>("strain", value); }
        float target() const { return ReadField<float>("target"); }
        void SetTarget(float value) const { WriteField<float>("target", value); }
        float level() const { return ReadField<float>("level"); }
        void SetLevel(float value) const { WriteField<float>("level", value); }
        float powerMul() const { return ReadField<float>("powerMul"); }
        void SetPowerMul(float value) const { WriteField<float>("powerMul", value); }
        float orgCapMul() const { return ReadField<float>("orgCapMul"); }
        void SetOrgCapMul(float value) const { WriteField<float>("orgCapMul", value); }
        float reinforceMul() const { return ReadField<float>("reinforceMul"); }
        void SetReinforceMul(float value) const { WriteField<float>("reinforceMul", value); }
        float attritionPerTick() const { return ReadField<float>("attritionPerTick"); }
        void SetAttritionPerTick(float value) const { WriteField<float>("attritionPerTick", value); }
        float speedMul() const { return ReadField<float>("speedMul"); }
        void SetSpeedMul(float value) const { WriteField<float>("speedMul", value); }
        float orgRegenMul() const { return ReadField<float>("orgRegenMul"); }
        void SetOrgRegenMul(float value) const { WriteField<float>("orgRegenMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
