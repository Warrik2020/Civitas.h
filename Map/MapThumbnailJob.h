#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapThumbnailJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapThumbnailJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapThumbnailJob") {}
    public:
        bool Done() const { return ReadField<bool>("Done"); }
        void Done(bool value) const { WriteField<bool>("Done", value); }
        void* Pixels() const { return ReadField<void*>("Pixels"); }
        void Pixels(void* value) const { WriteField<void*>("Pixels", value); }
        int Width() const { return ReadField<int>("Width"); }
        void Width(int value) const { WriteField<int>("Width", value); }
        int Height() const { return ReadField<int>("Height"); }
        void Height(int value) const { WriteField<int>("Height", value); }
        void* Failure() const { return ReadField<void*>("Failure"); }
        void Failure(void* value) const { WriteField<void*>("Failure", value); }
    };
}
