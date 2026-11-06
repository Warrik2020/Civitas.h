#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class BattleMath : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleMath(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "BattleMath") {}
    public:
        float WidthOf(void* d, void* cfg) const { void* args[] = { d, cfg }; return CallStaticValue<float>("WidthOf", args, 2); }
        float FrontageRadius(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("FrontageRadius", args, 1); }
        float WidthFor(void* anchor, void* attackers, int& flankSides) const { void* args[] = { anchor, attackers, &flankSides }; return CallStaticValue<float>("WidthFor", args, 3); }
        float WidthFor(void* anchor, void* attackers, void* extra, int& flankSides) const { void* args[] = { anchor, attackers, extra, &flankSides }; return CallStaticValue<float>("WidthFor", args, 4); }
        bool Fits(void* defender, void* attackers, void* a, void* cfg) const { void* args[] = { defender, attackers, a, cfg }; return CallStaticValue<bool>("Fits", args, 4); }
        float FrontRow(void* side, float width, void* cfg, bool keepFirst, void* front, int battleId = -1) const { void* args[] = { side, &width, cfg, &keepFirst, front, &battleId }; return CallStaticValue<float>("FrontRow", args, 6); }
        float Hits(float shots, float block) const { void* args[] = { &shots, &block }; return CallStaticValue<float>("Hits", args, 2); }
        float ArmourMul(float piercing, float armour) const { void* args[] = { &piercing, &armour }; return CallStaticValue<float>("ArmourMul", args, 2); }
        float PostureMul(void* anchor, bool meeting, float& fort, float& terrain) const { void* args[] = { anchor, &meeting, &fort, &terrain }; return CallStaticValue<float>("PostureMul", args, 4); }
        void Resolve(void* b, void* cfg, int tick) const { void* args[] = { b, cfg, &tick }; CallStatic("Resolve", args, 3); }
        float Odds(void* attackers, void* defender, void* cfg, int tick, float& ticksToBreak, float& ticksToStall) const { void* args[] = { attackers, defender, cfg, &tick, &ticksToBreak, &ticksToStall }; return CallStaticValue<float>("Odds", args, 6); }
        float hitsOnDef() const { return ReadField<float>("hitsOnDef"); }
        void SetHitsOnDef(float value) const { WriteField<float>("hitsOnDef", value); }
        float hitsOnAtk() const { return ReadField<float>("hitsOnAtk"); }
        void SetHitsOnAtk(float value) const { WriteField<float>("hitsOnAtk", value); }
        float defSize() const { return ReadField<float>("defSize"); }
        void SetDefSize(float value) const { WriteField<float>("defSize", value); }
        float atkSize() const { return ReadField<float>("atkSize"); }
        void SetAtkSize(float value) const { WriteField<float>("atkSize", value); }
        float defArmourMul() const { return ReadField<float>("defArmourMul"); }
        void SetDefArmourMul(float value) const { WriteField<float>("defArmourMul", value); }
        float atkArmourMul() const { return ReadField<float>("atkArmourMul"); }
        void SetAtkArmourMul(float value) const { WriteField<float>("atkArmourMul", value); }
        float postureMul() const { return ReadField<float>("postureMul"); }
        void SetPostureMul(float value) const { WriteField<float>("postureMul", value); }
        int terms() const { return ReadField<int>("terms"); }
        void SetTerms(int value) const { WriteField<int>("terms", value); }
    };
}
