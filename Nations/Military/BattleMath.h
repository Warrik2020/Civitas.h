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
        float WidthOf(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; return CallStaticValue<float>("WidthOf", __callArgs, 2); }
        float FrontageRadius(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("FrontageRadius", __callArgs, 1); }
        float WidthFor(void* anchor, void* attackers, int& flankSides) const { void* __callArgs[] = { anchor, attackers, &flankSides }; return CallStaticValue<float>("WidthFor", __callArgs, 3); }
        float WidthFor(void* anchor, void* attackers, void* extra, int& flankSides) const { void* __callArgs[] = { anchor, attackers, extra, &flankSides }; return CallStaticValue<float>("WidthFor", __callArgs, 4); }
        bool Fits(void* defender, void* attackers, void* a, void* cfg) const { void* __callArgs[] = { defender, attackers, a, cfg }; return CallStaticValue<bool>("Fits", __callArgs, 4); }
        float FrontRow(void* side, float width, void* cfg, bool keepFirst, void* front, int battleId = -1) const { void* __callArgs[] = { side, &width, cfg, &keepFirst, front, &battleId }; return CallStaticValue<float>("FrontRow", __callArgs, 6); }
        float Hits(float shots, float block) const { void* __callArgs[] = { &shots, &block }; return CallStaticValue<float>("Hits", __callArgs, 2); }
        float ArmourMul(float piercing, float armour) const { void* __callArgs[] = { &piercing, &armour }; return CallStaticValue<float>("ArmourMul", __callArgs, 2); }
        float PostureMul(void* anchor, bool meeting, float& fort, float& terrain) const { void* __callArgs[] = { anchor, &meeting, &fort, &terrain }; return CallStaticValue<float>("PostureMul", __callArgs, 4); }
        void Resolve(void* b, void* cfg, int tick) const { void* __callArgs[] = { b, cfg, &tick }; CallStatic("Resolve", __callArgs, 3); }
        float Odds(void* attackers, void* defender, void* cfg, int tick, float& ticksToBreak, float& ticksToStall) const { void* __callArgs[] = { attackers, defender, cfg, &tick, &ticksToBreak, &ticksToStall }; return CallStaticValue<float>("Odds", __callArgs, 6); }
    };
}
