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
        void* Describe(void* f) const { void* args[] = { f }; return CallStatic("Describe", args, 1); }
        void* Create(void* canvas, float left, float width = 440f) const { void* args[] = { canvas, &left, &width }; return CallStatic("Create", args, 3); }
        void SetLeft(float x) const { void* args[] = { &x }; Call("SetLeft", args, 1); }
        void Open(const char* nationName, void* current, void* color, void* onPick) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(nationName ? nationName : "") : nullptr; void* args[] = { managed_0, current, color, onPick }; Call("Open", args, 4); }
        void Close() const { Call("Close", nullptr, 0); }
        void SetCurrent(void* current) const { void* args[] = { current }; Call("SetCurrent", args, 1); }
        float DefaultWidth() const { return ReadStaticField<float>("DefaultWidth"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* art() const { return ReadField<void*>("art"); }
        void SetArt(void* value) const { WriteField<void*>("art", value); }
        void* ring() const { return ReadField<void*>("ring"); }
        void SetRing(void* value) const { WriteField<void*>("ring", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        int item() const { return ReadField<int>("item"); }
        void SetItem(int value) const { WriteField<int>("item", value); }
    };
}
