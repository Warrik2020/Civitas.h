#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class ClaimSmoothing : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ClaimSmoothing(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "ClaimSmoothing") {}
    public:
        int RadiusFor(int smallestPiece) const { void* args[] = { &smallestPiece }; return CallStaticValue<int>("RadiusFor", args, 1); }
        int Smooth(int width, int height, void* land, void* claims, void* pinned) const { void* args[] = { &width, &height, land, claims, pinned }; return CallStaticValue<int>("Smooth", args, 5); }
        int Smooth(int width, int height, void* land, void* claims, void* pinned, int& radius) const { void* args[] = { &width, &height, land, claims, pinned, &radius }; return CallStaticValue<int>("Smooth", args, 6); }
        int MinRadius() const { return ReadStaticField<int>("MinRadius"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
        int start() const { return ReadField<int>("start"); }
        void SetStart(int value) const { WriteField<int>("start", value); }
        int size() const { return ReadField<int>("size"); }
        void SetSize(int value) const { WriteField<int>("size", value); }
        int label() const { return ReadField<int>("label"); }
        void SetLabel(int value) const { WriteField<int>("label", value); }
        bool pinned() const { return ReadField<bool>("pinned"); }
        void SetPinned(bool value) const { WriteField<bool>("pinned", value); }
    };
}
