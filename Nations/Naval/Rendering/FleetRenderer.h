#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval::Rendering
{
    class FleetRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FleetRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval.Rendering", "FleetRenderer") {}
    public:
        void* HitTest(void* screen, float maxPx, int onlyNation) const { void* __callArgs[] = { screen, &maxPx, &onlyNation }; return CallStatic("HitTest", __callArgs, 3); }
        void InScreenRect(void* rect, int nationId, void* into) const { void* __callArgs[] = { rect, &nationId, into }; CallStatic("InScreenRect", __callArgs, 3); }
        bool ShowRings() const { return ReadStaticField<bool>("ShowRings"); }
        void ShowRings(bool value) const { WriteStaticField<bool>("ShowRings", value); }
        bool Visible() const { return ReadStaticField<bool>("Visible"); }
        void Visible(bool value) const { WriteStaticField<bool>("Visible", value); }
    };
}
