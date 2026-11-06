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
        void Rebuild(void* colorAt) const { void* __callArgs[] = { colorAt }; Call("Rebuild", __callArgs, 1); }
        void BeginSparse() const { Call("BeginSparse", nullptr, 0); }
        void PaintTiles(void* tiles, void* col) const { void* __callArgs[] = { tiles, col }; Call("PaintTiles", __callArgs, 2); }
        void PaintTilesOverload3(void* tiles, void* col) const { void* __callArgs[] = { tiles, col }; Call("PaintTiles", __callArgs, 2); }
        void PaintTilesOutlined(void* tiles, void* fill, void* edge, float lineWidth) const { void* __callArgs[] = { tiles, fill, edge, &lineWidth }; Call("PaintTilesOutlined", __callArgs, 4); }
        void SetTint(void* tint) const { void* __callArgs[] = { tint }; Call("SetTint", __callArgs, 1); }
        void EndSparse() const { Call("EndSparse", nullptr, 0); }
        void Flush() const { Call("Flush", nullptr, 0); }
        void* Lerp(void* a, void* b, float t) const { void* __callArgs[] = { a, b, &t }; return CallStatic("Lerp", __callArgs, 3); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        int stripePeriod() const { return ReadField<int>("stripePeriod"); }
        void stripePeriod(int value) const { WriteField<int>("stripePeriod", value); }
        int stripeWidth() const { return ReadField<int>("stripeWidth"); }
        void stripeWidth(int value) const { WriteField<int>("stripeWidth", value); }
        bool antiDiagonal() const { return ReadField<bool>("antiDiagonal"); }
        void antiDiagonal(bool value) const { WriteField<bool>("antiDiagonal", value); }
        float rimMaxScreenPx() const { return ReadField<float>("rimMaxScreenPx"); }
        void rimMaxScreenPx(float value) const { WriteField<float>("rimMaxScreenPx", value); }
    };
}
