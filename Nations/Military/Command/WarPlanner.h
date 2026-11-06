#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class WarPlanner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarPlanner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "WarPlanner") {}
    public:
        int FortLevelAt(int tile, int nation, void* g) const { void* __callArgs[] = { &tile, &nation, g }; return CallStaticValue<int>("FortLevelAt", __callArgs, 3); }
        float Overrun(void* pl, void* mil, void* g) const { void* __callArgs[] = { pl, mil, g }; return CallStaticValue<float>("Overrun", __callArgs, 3); }
        int SlotOfTag(int tag) const { void* __callArgs[] = { &tag }; return CallStaticValue<int>("SlotOfTag", __callArgs, 1); }
        int Tag(int foe, int slot) const { void* __callArgs[] = { &foe, &slot }; return CallStaticValue<int>("Tag", __callArgs, 2); }
        int FoeOfTag(int tag) const { void* __callArgs[] = { &tag }; return CallStaticValue<int>("FoeOfTag", __callArgs, 1); }
        void* OperationsOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("OperationsOf", __callArgs, 1); }
        void Forget(int nationId) const { void* __callArgs[] = { &nationId }; Call("Forget", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Evaluate(void* mil, void* n, void* ctx) const { void* __callArgs[] = { mil, n, ctx }; Call("Evaluate", __callArgs, 3); }
        bool EvaluatePart(int part, void* mil, void* n, void* ctx) const { void* __callArgs[] = { &part, mil, n, ctx }; return CallValue<bool>("EvaluatePart", __callArgs, 4); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int TagStride() const { return ReadStaticField<int>("TagStride"); }
        int SecondSlot() const { return ReadStaticField<int>("SecondSlot"); }
        int EvaluateParts() const { return ReadStaticField<int>("EvaluateParts"); }
    };
}
