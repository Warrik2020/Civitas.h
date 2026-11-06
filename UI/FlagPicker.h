#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class FlagPicker : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagPicker(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "FlagPicker") {}
    public:
        void* Describe(void* f) const { void* __callArgs[] = { f }; return CallStatic("Describe", __callArgs, 1); }
        void* Create(void* canvas, float left, float width = 440.0f) const { void* __callArgs[] = { canvas, &left, &width }; return CallStatic("Create", __callArgs, 3); }
        void SetLeft(float x) const { void* __callArgs[] = { &x }; Call("SetLeft", __callArgs, 1); }
        void Open(const char* nationName, void* current, void* color, void* onPick) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(nationName ? nationName : "") : nullptr; void* __callArgs[] = { managed_0, current, color, onPick }; Call("Open", __callArgs, 4); }
        void Close() const { Call("Close", nullptr, 0); }
        void SetCurrent(void* current) const { void* __callArgs[] = { current }; Call("SetCurrent", __callArgs, 1); }
        float DefaultWidth() const { return ReadStaticField<float>("DefaultWidth"); }
    };
}
