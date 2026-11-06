#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class WorldSaveJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldSaveJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "WorldSaveJob") {}
    public:
        bool Done() const { return ReadField<bool>("Done"); }
        void Done(bool value) const { WriteField<bool>("Done", value); }
        void* Path() const { return ReadField<void*>("Path"); }
        void Path(void* value) const { WriteField<void*>("Path", value); }
        void* Failure() const { return ReadField<void*>("Failure"); }
        void Failure(void* value) const { WriteField<void*>("Failure", value); }
    };
}
