#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class MemoryReport : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MemoryReport(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "MemoryReport") {}
    public:
        void* Collect() const { return CallStatic("Collect", nullptr, 0); }
        void* Format(void* r) const { void* args[] = { r }; return CallStatic("Format", args, 1); }
        void Log() const { CallStatic("Log", nullptr, 0); }
        bool Equals(void* a, void* b) const { void* args[] = { a, b }; return CallValue<bool>("Equals", args, 2); }
        int GetHashCode(void* o) const { void* args[] = { o }; return CallValue<int>("GetHashCode", args, 1); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        int64_t bytes() const { return ReadField<int64_t>("bytes"); }
        void SetBytes(int64_t value) const { WriteField<int64_t>("bytes", value); }
        int arrays() const { return ReadField<int>("arrays"); }
        void SetArrays(int value) const { WriteField<int>("arrays", value); }
        int64_t tiles() const { return ReadField<int64_t>("tiles"); }
        void SetTiles(int64_t value) const { WriteField<int64_t>("tiles", value); }
        void* groups() const { return ReadField<void*>("groups"); }
        void* textures() const { return ReadField<void*>("textures"); }
        int64_t managedCounted() const { return ReadField<int64_t>("managedCounted"); }
        void SetManagedCounted(int64_t value) const { WriteField<int64_t>("managedCounted", value); }
        int64_t textureGpu() const { return ReadField<int64_t>("textureGpu"); }
        void SetTextureGpu(int64_t value) const { WriteField<int64_t>("textureGpu", value); }
        int64_t textureCpu() const { return ReadField<int64_t>("textureCpu"); }
        void SetTextureCpu(int64_t value) const { WriteField<int64_t>("textureCpu", value); }
        int64_t monoUsed() const { return ReadField<int64_t>("monoUsed"); }
        void SetMonoUsed(int64_t value) const { WriteField<int64_t>("monoUsed", value); }
        int64_t unityAllocated() const { return ReadField<int64_t>("unityAllocated"); }
        void SetUnityAllocated(int64_t value) const { WriteField<int64_t>("unityAllocated", value); }
        int64_t gfxDriver() const { return ReadField<int64_t>("gfxDriver"); }
        void SetGfxDriver(int64_t value) const { WriteField<int64_t>("gfxDriver", value); }
        int64_t reserved() const { return ReadField<int64_t>("reserved"); }
        void SetReserved(int64_t value) const { WriteField<int64_t>("reserved", value); }
        void* Instance() const { return ReadStaticField<void*>("Instance"); }
    };
}
