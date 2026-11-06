#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::MapModes
{
    class IdentityFillPainter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityFillPainter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.MapModes", "IdentityFillPainter") {}
    public:
        void Repaint(int axis) const { void* args[] = { &axis }; Call("Repaint", args, 1); }
        void DiscardDirty(int axis) const { void* args[] = { &axis }; Call("DiscardDirty", args, 1); }
        bool LogDrip() const { return ReadStaticField<bool>("LogDrip"); }
        void SetLogDrip(bool value) const { WriteStaticField<bool>("LogDrip", value); }
    };
}
