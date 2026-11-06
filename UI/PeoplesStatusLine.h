#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesStatusLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesStatusLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesStatusLine") {}
    public:
        void Set(void* r) const { void* __callArgs[] = { &r }; Call("Set", __callArgs, 1); }
        void Set(const char* message, bool bad) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(message ? message : "") : nullptr; void* __callArgs[] = { managed_0, &bad }; Call("Set", __callArgs, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        bool Tick() const { return CallValue<bool>("Tick", nullptr, 0); }
        float OkSeconds() const { return ReadStaticField<float>("OkSeconds"); }
        float RefusalSeconds() const { return ReadStaticField<float>("RefusalSeconds"); }
    };
}
