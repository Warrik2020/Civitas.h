#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class GridScratch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GridScratch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "GridScratch") {}
    public:
        void* Rent(int length) const { void* __callArgs[] = { &length }; return CallStatic("Rent", __callArgs, 1); }
        void* RentCleared(int length) const { void* __callArgs[] = { &length }; return CallStatic("RentCleared", __callArgs, 1); }
        void Return_(void* array) const { void* __callArgs[] = { array }; CallStatic("Return", __callArgs, 1); }
        void Release() const { CallStatic("Release", nullptr, 0); }
    };
}
