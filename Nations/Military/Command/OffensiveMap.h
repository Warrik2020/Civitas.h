#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class OffensiveMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OffensiveMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "OffensiveMap") {}
    public:
        void* Set(void* plan, void* front, float lo, float hi) const { void* __callArgs[] = { plan, front, &lo, &hi }; return Call("Set", __callArgs, 4); }
        void* GoalFor(void* front, void* p) const { void* __callArgs[] = { front, p }; return Call("GoalFor", __callArgs, 2); }
        void* line() const { return ReadField<void*>("line"); }
        bool reversed() const { return ReadField<bool>("reversed"); }
        void reversed(bool value) const { WriteField<bool>("reversed", value); }
        float lo() const { return ReadField<float>("lo"); }
        void lo(float value) const { WriteField<float>("lo", value); }
        float hi() const { return ReadField<float>("hi"); }
        void hi(float value) const { WriteField<float>("hi", value); }
    };
}
