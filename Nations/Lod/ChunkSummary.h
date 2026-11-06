#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class ChunkSummary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ChunkSummary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "ChunkSummary") {}
    public:
        int ChunkOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("ChunkOf", __callArgs, 2); }
        int ChunkOfIndex(int index) const { void* __callArgs[] = { &index }; return CallValue<int>("ChunkOfIndex", __callArgs, 1); }
        void BuildStatic(void* terrain) const { void* __callArgs[] = { terrain }; Call("BuildStatic", __callArgs, 1); }
        int LandCount(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("LandCount", __callArgs, 1); }
        int TileCount(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("TileCount", __callArgs, 1); }
        bool OceanFree(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("OceanFree", __callArgs, 1); }
        int Version(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("Version", __callArgs, 1); }
        bool OwnerUniform(int chunk, int& owner) const { void* __callArgs[] = { &chunk, &owner }; return CallValue<bool>("OwnerUniform", __callArgs, 2); }
        void Touch(int index) const { void* __callArgs[] = { &index }; Call("Touch", __callArgs, 1); }
        void TouchXY(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("TouchXY", __callArgs, 2); }
        int StructureVersion(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("StructureVersion", __callArgs, 1); }
        void TouchStructure(int index) const { void* __callArgs[] = { &index }; Call("TouchStructure", __callArgs, 1); }
        void TouchStructureXY(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("TouchStructureXY", __callArgs, 2); }
        void TouchAll() const { Call("TouchAll", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
    };
}
