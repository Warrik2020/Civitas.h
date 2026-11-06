#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval::Rendering
{
    class VesselRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VesselRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval.Rendering", "VesselRenderer") {}
    public:
        bool Visible() const { return ReadStaticField<bool>("Visible"); }
        void Visible(bool value) const { WriteStaticField<bool>("Visible", value); }
        bool ShowLanes() const { return ReadStaticField<bool>("ShowLanes"); }
        void ShowLanes(bool value) const { WriteStaticField<bool>("ShowLanes", value); }
    };
}
