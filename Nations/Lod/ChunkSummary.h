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
        int ChunkOf(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ChunkOf", args, 2); }
        int ChunkOfIndex(int index) const { void* args[] = { &index }; return CallValue<int>("ChunkOfIndex", args, 1); }
        void BuildStatic(void* terrain) const { void* args[] = { terrain }; Call("BuildStatic", args, 1); }
        int LandCount(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("LandCount", args, 1); }
        int TileCount(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("TileCount", args, 1); }
        bool OceanFree(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("OceanFree", args, 1); }
        int Version(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("Version", args, 1); }
        bool OwnerUniform(int chunk, int& owner) const { void* args[] = { &chunk, &owner }; return CallValue<bool>("OwnerUniform", args, 2); }
        void Touch(int index) const { void* args[] = { &index }; Call("Touch", args, 1); }
        void TouchXY(int x, int y) const { void* args[] = { &x, &y }; Call("TouchXY", args, 2); }
        int StructureVersion(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("StructureVersion", args, 1); }
        void TouchStructure(int index) const { void* args[] = { &index }; Call("TouchStructure", args, 1); }
        void TouchStructureXY(int x, int y) const { void* args[] = { &x, &y }; Call("TouchStructureXY", args, 2); }
        void TouchAll() const { Call("TouchAll", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
    };
}
