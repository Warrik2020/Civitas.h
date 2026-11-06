#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class DiagonalHatchRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DiagonalHatchRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "DiagonalHatchRenderer") {}
    public:
        void Rebuild(void* colorAt) const { void* args[] = { colorAt }; Call("Rebuild", args, 1); }
        void BeginSparse() const { Call("BeginSparse", nullptr, 0); }
        void PaintTiles(void* tiles, void* col) const { void* args[] = { tiles, col }; Call("PaintTiles", args, 2); }
        void PaintTiles(void* tiles, void* col) const { void* args[] = { tiles, col }; Call("PaintTiles", args, 2); }
        void PaintTilesOutlined(void* tiles, void* fill, void* edge, float lineWidth) const { void* args[] = { tiles, fill, edge, &lineWidth }; Call("PaintTilesOutlined", args, 4); }
        void SetTint(void* tint) const { void* args[] = { tint }; Call("SetTint", args, 1); }
        void EndSparse() const { Call("EndSparse", nullptr, 0); }
        void Flush() const { Call("Flush", nullptr, 0); }
        void* Lerp(void* a, void* b, float t) const { void* args[] = { a, b, &t }; return CallStatic("Lerp", args, 3); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void* ColorAt(int index) const { void* args[] = { &index }; return Call("ColorAt", args, 1); }
        int stripePeriod() const { return ReadField<int>("stripePeriod"); }
        void SetStripePeriod(int value) const { WriteField<int>("stripePeriod", value); }
        int stripeWidth() const { return ReadField<int>("stripeWidth"); }
        void SetStripeWidth(int value) const { WriteField<int>("stripeWidth", value); }
        bool antiDiagonal() const { return ReadField<bool>("antiDiagonal"); }
        void SetAntiDiagonal(bool value) const { WriteField<bool>("antiDiagonal", value); }
        float rimMaxScreenPx() const { return ReadField<float>("rimMaxScreenPx"); }
        void SetRimMaxScreenPx(float value) const { WriteField<float>("rimMaxScreenPx", value); }
    };
}
