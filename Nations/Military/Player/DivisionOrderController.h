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
        bool ScreenPointHitsPlayerDivision(void* screen) const { void* __callArgs[] = { screen }; return CallStaticValue<bool>("ScreenPointHitsPlayerDivision", __callArgs, 1); }
        void SetOverlayVisible(bool visible) const { void* __callArgs[] = { &visible }; CallStatic("SetOverlayVisible", __callArgs, 1); }
        void SelectDivisions(void* divisionIds) const { void* __callArgs[] = { divisionIds }; CallStatic("SelectDivisions", __callArgs, 1); }
    };
}
