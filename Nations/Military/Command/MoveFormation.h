#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MoveFormation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MoveFormation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MoveFormation") {}
    public:
        void Slots(void* units, void* tile, void* grid, void* mil, void* into) const { void* __callArgs[] = { units, tile, grid, mil, into }; CallStatic("Slots", __callArgs, 5); }
        int RowMax() const { return ReadStaticField<int>("RowMax"); }
        float SpacingBodies() const { return ReadStaticField<float>("SpacingBodies"); }
    };
}
