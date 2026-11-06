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
        void* Rent(int length) const { void* args[] = { &length }; return CallStatic("Rent", args, 1); }
        void* RentCleared(int length) const { void* args[] = { &length }; return CallStatic("RentCleared", args, 1); }
        void Return_(void* array) const { void* args[] = { array }; CallStatic("Return", args, 1); }
        void Release() const { CallStatic("Release", nullptr, 0); }
    };
}
