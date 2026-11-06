#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class StateBorderRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateBorderRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "StateBorderRenderer") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetZoomFade(float alpha) const { void* args[] = { &alpha }; Call("SetZoomFade", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Sync(void* grid, void* stateStyle, void* historicStyle) const { void* args[] = { grid, stateStyle, historicStyle }; Call("Sync", args, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* v() const { return ReadField<void*>("v"); }
        void* c() const { return ReadField<void*>("c"); }
        void* t() const { return ReadField<void*>("t"); }
        void* u() const { return ReadField<void*>("u"); }
        int serial() const { return ReadField<int>("serial"); }
        void SetSerial(int value) const { WriteField<int>("serial", value); }
    };
}
