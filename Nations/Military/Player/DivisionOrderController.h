#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class DivisionOrderController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionOrderController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "DivisionOrderController") {}
    public:
        bool ScreenPointHitsPlayerDivision(void* screen) const { void* args[] = { screen }; return CallStaticValue<bool>("ScreenPointHitsPlayerDivision", args, 1); }
        void SetOverlayVisible(bool visible) const { void* args[] = { &visible }; CallStatic("SetOverlayVisible", args, 1); }
        void SelectDivisions(void* divisionIds) const { void* args[] = { divisionIds }; CallStatic("SelectDivisions", args, 1); }
        void* posTile() const { return ReadField<void*>("posTile"); }
        void SetPosTile(void* value) const { WriteField<void*>("posTile", value); }
        float expiry() const { return ReadField<float>("expiry"); }
        void SetExpiry(float value) const { WriteField<float>("expiry", value); }
    };
}
